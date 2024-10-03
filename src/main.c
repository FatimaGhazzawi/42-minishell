/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-ghaz <fel-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 02:38:42 by hawayda           #+#    #+#             */
/*   Updated: 2024/10/03 16:36:27 by fel-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

// Handle cases when SHLVL and path are not created
// Ensure uniqueness of keys in env
// t_env	*increment_shell_level(t_env *_env)
// {
// 	char	*tmp;

// 	tmp = get_node_value_by_key(_env, "SHLVL", (void *)(increment_node(1)));
// 	tmp = ft_itoa(ft_atoi(tmp) + 1);
// 	set_node_value_by_key(_env, "SHLVL", tmp);
// 	return (_env);
// }

// void	fsh(char *input, t_data *_env)
// {
// 	while (1)
// 	{
// 		input = readline("\033[0;32mMinishell >\033[0m ");
// 		if (input == NULL)
// 		{
// 			ft_printf("exit\n");
// 			break ;
// 		}
// 		if (strcmp(input, "exit") == 0)
// 		{
// 			ft_printf("exit\n");
// 			free(input);
// 			break ;
// 		}
// 		// if (g_last_signal != 0)
// 		// {
// 		//	env_cpy->last_exit_status = 128 + g_last_signal;
// 		//	g_last_signal = 0;
// 		// }
// 		// check(input, env_cpy);
// 		free(input);
// 	}
// }

// int	main(int ac, char **av, char **env)
// {
// 	char	*input;
// 	t_env	*_env;

// 	(void)ac;
// 	(void)av;
// 	input = NULL;
// 	setup_signal_handlers();
// 	// if (env[0] == NULL)
// 	// 	env_cpy = create_env();
// 	// else
// 	// 	env_cpy = clone_env(env);
// 	_env = increment_shell_level(_env);
// 	fsh(input, _env);
// 	free(input);
// 	// free_env_list(env_cpy);
// 	rl_clear_history();
// 	rl_free_line_state();
// 	rl_cleanup_after_signal();
// 	clear_history();
// 	history_truncate_file(NULL, 0);
// 	return (0);
// }



// int main () //to test the echo function
// {
// 	char	**tokens;
// 	// // int		i;
// 	char	*str;
// 	// str = "cd Home";
// 	str = "echo -nnnnnnnnnn -nnnnnnnhnnn  \">>       file.tt\n |\n  \\\"ju\\\"grep|a < b >> w > \"";
// 	// 	"| a \"pa\n\"|\"|ttern\" \n";
// 	tokens = ft_split_charset(str);
// 	ft_echo(tokens);
// 	// ft_cd(str);
// }




// int main(int argc, char **argv) //to test the exit function
// {
//     // Test cases to simulate different arguments for the ft_exit function
//     char *test1[] = {"exit", NULL};                       // No arguments, should exit with 0
//     char *test2[] = {"exit", "42", NULL};                 // Single valid argument, should exit with 42
//     char *test3[] = {"exit", "-42", NULL};                // Single negative valid argument, should exit with -42
//     char *test4[] = {"exit", "hello", NULL};              // Invalid numeric argument, should print error and exit with 2
//     char *test5[] = {"exit", "42", "56", NULL};           // Too many arguments, should print error and not exit
//     char *test6[] = {"exit", "+++123", NULL};             // Invalid multiple signs, should print error and exit with 2
//     char *test7[] = {"exit", "--666", NULL};              // Invalid multiple signs, should print error and exit with 2
//     char *test8[] = {"exit", "2147483648", NULL};         // Large invalid number, should print error and exit with 2
//     char *test9[] = {"exit", "-0000042", NULL};           // Valid argument with leading zeros, should exit with -42

//     // Uncomment each line below to test different cases:

//     // ft_exit(test1);   // No arguments: should exit with 0
//     // ft_exit(test2);   // Exit with a valid number: should exit with 42
//     // ft_exit(test3);   // Exit with a negative number: should exit with -42
//     // ft_exit(test4);   // Invalid argument: should print "numeric argument required" and exit with 2
//     // ft_exit(test5);   // Too many arguments: should print "too many arguments" and not exit
//     // ft_exit(test6);   // Invalid multiple signs: should print "numeric argument required" and exit with 2
//     // ft_exit(test7);   // Invalid multiple signs: should print "numeric argument required" and exit with 2
//     // ft_exit(test8);   // Invalid large number: should print "numeric argument required" and exit with 2
//     // ft_exit(test9);   // Valid number with leading zeros: should exit with -42

//     return 0;
// }


// int main(int argc, char **argv) //to test pwd
// {
//     // Simulate the 'pwd' command with various test cases

//     // Example inputs for testing
//     char *test1[] = {"pwd", NULL};                 // Standard case
//     char *test2[] = {"pwd", "hola", NULL};         // Extra non-option argument
//     char *test3[] = {"pwd", "-p", NULL};           // Invalid option
//     char *test4[] = {"pwd", "--p", NULL};          // Invalid option
//     char *test5[] = {"pwd", "---p", NULL};         // Invalid option
//     char *test6[] = {"pwd", "pwd", "pwd", NULL};   // Multiple 'pwd'

//     // Uncomment to test different cases
//     // ft_pwd(test1); // Should print working directory
//     // ft_pwd(test2); // Should print working directory (ignore 'hola')
//     // ft_pwd(test3); // Should print error for invalid option '-p'
//     // ft_pwd(test4); // Should print error for invalid option '--p'
//     // ft_pwd(test5); // Should print error for invalid option '---p'
//     // ft_pwd(test6); // Should print working directory (ignore extra 'pwd')

//     return 0;
// }

// int main(int argc, char **argv) //cd
// {
//     // Example commands to test
//     char *test1[] = {"cd", NULL};                  // Change to HOME
//     char *test2[] = {"cd", "..", NULL};            // Go to parent directory
//     char *test3[] = {"cd", "-", NULL};             // Go to previous directory
//     char *test4[] = {"cd", "/nonexistent", NULL};  // Non-existent directory
//     char *test5[] = {"cd", "..", "..", NULL};      // Too many arguments
//     char *test6[] = {"cd", "--", NULL};            // Invalid option
//     char *test7[] = {"cd", "/etc", NULL};          // Valid directory
//     char *test8[] = {"cd", "/etc", "extra", NULL}; // Too many arguments

//     // Uncomment to test different cases
//     // ft_cd(test1);   // Should go to HOME directory
//     // ft_cd(test2);   // Should go to parent directory
//     // ft_cd(test3);   // Should go to previous directory
//     // ft_cd(test4);   // Should print No such file or directory error
//     // ft_cd(test5);   // Should print too many arguments
//     // ft_cd(test6);   // Should print invalid option
//     // ft_cd(test7);   // Should change to /etc directory
//     // ft_cd(test8);   // Should print too many arguments

//     return 0;
// }
