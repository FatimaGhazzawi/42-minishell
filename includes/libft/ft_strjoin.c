/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 08:07:10 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/06/13 08:26:19 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	char	*joined;
	char	*start;

	l1 = ft_strlen(s1);
	joined = (char *) malloc ((sizeof(char) * (l1 + ft_strlen(s2) + 1)));
	if (!joined)
		return (NULL);
	start = joined;
	while (*s1)
		*joined++ = *s1++;
	while (*s2)
		*joined++ = *s2++;
	*joined = '\0';
	return (start);
}
