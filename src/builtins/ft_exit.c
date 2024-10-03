/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 03:13:29 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/10/03 16:37:24 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"
//bade et2akad ba3d l exit lezim alphabetic w numeric aw bs numberic????
int is_numeric(const char *str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

void ft_exit(char **args)
{
    int arg_count = 0;

    while (args[arg_count])
        arg_count++;
    ft_printf("exit\n");
    if (arg_count == 1)
        exit(0);
    else if (arg_count == 2)
    {
        if (is_numeric(args[1]))
            exit(ft_atoi(args[1]));
        else
        {
            ft_printf("bash: exit: %s: numeric argument required\n", args[1]);
            exit(2);
        }
    }
    else
    {
        if (is_numeric(args[1]))
            ft_printf("bash: exit: too many arguments\n");
        else
        {
            ft_printf("bash: exit: %s: numeric argument required\n", args[1]);
            exit(2);
        }
    }
}
