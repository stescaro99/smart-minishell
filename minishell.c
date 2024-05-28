/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <stescaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:36:26 by stescaro          #+#    #+#             */
/*   Updated: 2024/05/28 10:36:45 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int	main(int ac, char **argv, char **env)
{
	int		pid;
	char	*cmd[2];
	int		res;

	(void)ac;
	(void)argv;
	res = 0;
	cmd[0] = "bash";
	cmd[1] = NULL;
	pid = fork();
	if (pid == 0)
		execve("/bin/bash", cmd, env);
	else
		waitpid(pid, &res, 0);
	return (res);
}
