/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:09:17 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/09/25 21:55:56 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H  

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <strings.h>
# include <string.h>

typedef struct s_token_data
{
	char	**tokens;
	int		count;
	int		size;
	struct s_token_data *next;
	struct s_token_data *previous;
	char *data;
}	t_token_data;

// typedef struct nodee
// {
// 	int				data;
// 	struct nodee	*next;
// 	struct nodee	*previous;
// }					t_node;

int		check_space(char c);
int		is_separator(char *str, int i);
int		skip_spaces(char *str, int i);
int		handle_quotes(char *str, int i, char *in_quote, int *handled);
int		get_token(char *str, int i, char **token);
int		get_separator(char *str, int i, char **token);
int		add_token(t_token_data *data, char *token);
int		process_next_token(char *str, int i, t_token_data *data);
char	**ft_split(char *str);
void	ft_echo(char **splitted);
char	*ft_strndup(const char *s, size_t n);
int		ft_strcmp (char *s1, char *s2);
void	ft_pwd();
void	ft_exit();
void	ft_cd(char *input);
void	ft_strcopy(char *dest, char *src);
void	ft_strcat(char *dest, char *source);

#endif
