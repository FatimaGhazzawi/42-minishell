/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:06:46 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/09/25 22:00:17 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/* 3nde case: echo -n -n -n "rargrg\nwef"
hay l case ma3molla split la shelt l echo,
so bekhud splitted[1], ba3mella split 3l spaces,
    ble2e l \n w eza count = 1 ye3ne 3nde \n fa ma b3ml new line
w case l tene: echo -n -n -n wef \n arg \n aerg
hayde btsir splitted[i] fa kamen b3ml strcmp 3l \n w bs le2iya,
eza count = 1, ma b3mela */
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

void ft_echo(char **splitted)
{
    int i = 1;
    int count = 0;

    while (splitted[i] && strcmp(splitted[i], "-n") == 0)
    {
        count = 1;
        i++;
    }
    while (splitted[i])
    {
        int j = 0;
        if (splitted[i][0] == '"')
        {
            j = 1;
            printf("\"");
            while (splitted[i][j] != '"' && splitted[i][j] != '\0')
            {
                if (splitted[i][j] == '\n' && count == 1)
                    printf("\\n");
                else
                    printf("%c", splitted[i][j]);
                j++;
            }
            if (splitted[i][j] == '"')
                printf("\"");
        }
        else
        {
            while (splitted[i][j] != '\0')
            {
                if (splitted[i][j] == '\n' && count == 1)
                    printf("\\n");
                else
                    printf("%c", splitted[i][j]);
                j++;
            }
        }
        if (splitted[i + 1] != NULL)
            printf(" ");
        i++;
    }
    if (count == 0)
        printf("\n");
}
