/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 03:16:33 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/10/03 16:36:44 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"
//case 3 w case 7 ma zabato (bl main)
void change_directory(const char *path)
{
    if (chdir(path) == 0)
    {
        setenv("OLDPWD", getenv("PWD"), 1);
        char cwd[1024];
        if (getcwd(cwd, sizeof(cwd)) != NULL)
            setenv("PWD", cwd, 1);
        else
            perror("getcwd() error");
    }
    else
    {
        if (errno == ENOENT)
            printf("bash: cd: %s: No such file or directory\n", path);
        else if (errno == ENOTDIR)
            printf("bash: cd: %s: Not a directory\n", path);
        else
            perror("cd");
    }
}

void ft_cd(char **args) 
{
    char *home_dir = getenv("HOME");
    static char prev_dir[1024] = "";
    char current_dir[1024];

    if (!getcwd(current_dir, sizeof(current_dir)))
    {
        perror("getcwd");
        return;
    }
    int arg_count = 0;
    while (args[arg_count])
        arg_count++;

    if (arg_count == 1)
    {
        if (home_dir)
            change_directory(home_dir);
        else
            printf("bash: cd: HOME not set\n");
    }
    else if (arg_count == 2)
    {
        if (strcmp(args[1], "-") == 0)
        {
            if (strlen(prev_dir) > 0)
            {
                printf("%s\n", prev_dir);
                change_directory(prev_dir);
            }
            else
                printf("bash: cd: OLDPWD not set\n");
        }
        else if (strcmp(args[1], "--") == 0)
            printf("bash: cd: --: invalid option\n");
        else
            change_directory(args[1]);
        strncpy(prev_dir, current_dir, sizeof(prev_dir) - 1);
        prev_dir[sizeof(prev_dir) - 1] = '\0';
    }
    else
        printf("bash: cd: too many arguments\n");
}
