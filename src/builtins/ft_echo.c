/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:06:46 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/10/03 16:06:51 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"
// newline 3m yeba3 b3do ne wline ye3ne 3m yenzal 3l satr, 
// ymkn bas yet2assam bl tree bten7al?

int no_newline(char **str)
{
    int i = 1;
    while (str[i])
    {
        if (str[i][0] == '-' && str[i][1] == 'n')
        {
            int j = 2;
            while (str[i][j])
            {
                if (str[i][j] != 'n')
                    return i;
                j++;
            }
            i++;
        }
        else
            break;
    }
    return i;
}
void print_argument(char *arg)
{
    int j = 0;
    while (arg[j])
    {
        if (arg[j] == '\\' && arg[j + 1] == 'n')
        {
            ft_printf("\n");
            j += 2;
        }
        else
        {
            ft_printf("%c", arg[j]);
            j++;
        }
    }
}
void ft_echo(char **str)
{
    int i = 1;
    int new_line = 1;

    i = no_newline(str);
    if (i > 1)
        new_line = 0;

    while (str[i])
    {
        print_argument(str[i]);
        if (str[i + 1])
            ft_printf(" ");
        i++;
    }
    if (new_line)
        ft_printf("\n");
}