/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <hawayda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 02:38:42 by hawayda           #+#    #+#             */
/*   Updated: 2024/09/27 00:32:49 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	main(int ac, char **av, char **env)
{
	char *input;
	data *_env;
	(void)ac;
	(void)av;
	setup_signal_handlers();

	// if (env[0] == NULL)
	// 	env_cpy = create_env();
	// else
	// 	env_cpy = clone_env(env);
	// env_cpy = add_shell_level(env_cpy);
	while (1)
	{
		input = readline("\033[0;32mMinishell >\033[0m ");
		if (input == NULL)
		{
			printf("exit\n");
			break ;
		}
		if (strcmp(input, "exit") == 0)
		{
			free(input);
			printf("exit\n");
			break ;
		}
		// printf("%s\n", input);
		// if (g_last_signal != 0)
		// {
		// 	env_cpy->last_exit_status = 128 + g_last_signal;
		// 	g_last_signal = 0;
		// }
		// check(input, env_cpy);
		input = NULL;
		free(input);
	}
	free(input);
	// free_env_list(env_cpy);
	rl_clear_history();
	rl_free_line_state();
	rl_cleanup_after_signal();
	clear_history();
	history_truncate_file(NULL, 0);
	return (0);
}