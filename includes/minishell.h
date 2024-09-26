/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <hawayda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:09:17 by fel-ghaz          #+#    #+#             */
/*   Updated: 2024/09/27 00:43:43 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define _XOPEN_SOURCE 700

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <ctype.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_token_data
{
	char				**tokens;
	char				*data;
	struct s_token_data	*left;
	struct s_token_data	*right;
	int					count;
	int					size;
	int					SHLVL;
}						data;

// typedef struct nodee
// {
// 	int				data;
// 	struct nodee	*next;
// 	struct nodee	*previous;
// }					t_node;

void					ft_echo(char **splitted);
void					ft_pwd(void);
void					ft_exit(void);
void					ft_cd(char *input);
void					ft_strcopy(char *dest, char *src);
void					ft_strcat(char *dest, char *source);
void					setup_signal_handlers(void);

char					**ft_split_charset(char *str);
char					*ft_strndup(const char *s, size_t n);

int						check_space(char c);
int						is_separator(char *str, int i);
int						skip_spaces(char *str, int i);
int						handle_quotes(char *str, int i, char *in_quote,
							int *handled);
int						get_token(char *str, int i, char **token);
int						get_separator(char *str, int i, char **token);
int						add_token(data *data, char *token);
int						process_next_token(char *str, int i, data *data);
int						ft_strcmp(char *s1, char *s2);

#endif
