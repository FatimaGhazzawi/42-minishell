/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:17:49 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/09/25 03:33:16 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_strcmp (char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void ft_strcopy(char *dest, char *src)
{
    if (dest == NULL || src == NULL)
        return;

    while (*src)
	{
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
void ft_strcat(char *dest, char *source)
{
	if (dest == NULL || source == NULL)
        return;
    while (*dest)
        dest++;
    while (*source)
	{
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}