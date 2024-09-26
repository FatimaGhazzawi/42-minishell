/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <hawayda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:19:16 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/09/27 00:44:55 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

// int	main(void)
// {
// char	**tokens;
// int		i;
// char	*str;

// str = "echo >> file.tt | \\\"ju\\\"grep|a < b >> w > "
// 	"| a \"pa\"|\"|ttern\"";
// tokens = ft_split(str);
// 	i = 0;
// 	if (!tokens)
// 	{
// 		fprintf(stderr, "Memory allocation failed\n");
// 		return (1);
// 	}
// 	while (tokens[i])
// 	{
// 		printf("Token %d: '%s'\n", i + 1, tokens[i]);
// 		free(tokens[i]);
// 		i++;
// 	}
// 	free(tokens);
// 	return (0);
// }
int	main(void)
{
	char **tokens;
	// // int		i;
	char *str;
	// str = "cd Home";
	str = "echo -n -n  \">>       file.tt\n |\n  \\\"ju\\\"grep|a < b >> w > \"";
	// 	"| a \"pa\n\"|\"|ttern\" \n";
	tokens = ft_split_charset(str);
	ft_echo(tokens);
	// ft_cd(str);
}