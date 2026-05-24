/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:42:42 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 14:08:58 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	print_result(int exit_code)
{
	if (exit_code == OK)
		ft_putstr_fd("\x1b[32mOK\t:)\x1b[0m", STDOUT_FILENO);
	else if (exit_code == KO)
		ft_putstr_fd("\x1b[31mKO\t:(\x1b[0m", STDOUT_FILENO);
	else if (exit_code == SEGV)
		ft_putstr_fd("\x1b[33mSIGSEGV\t:(\x1b[0m", STDOUT_FILENO);
	else if (exit_code == BUS)
		ft_putstr_fd("\x1b[33mSIGBUS\t:(\x1b[0m", STDOUT_FILENO);	
}

static void	print_test(t_unit_test *data, int exit_code)
{
	ft_putstr_fd(data->func_name, STDOUT_FILENO);
	ft_putstr_fd(":\t", STDOUT_FILENO);
	ft_putstr_fd(data->test_name, STDOUT_FILENO);
	ft_putstr_fd(":\t", STDOUT_FILENO);
	print_result(exit_code);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

static int	launch(t_unit_test *data)
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		return (-1);
	if (pid == 0)
		exit(data->fun());
	wait(&status);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return (OK);
		else if (WEXITSTATUS(status) == 255)
			return (KO);
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == 11)
			return (SEGV);
		else if (WTERMSIG(status) == 7)
			return (BUS);
	}
	// if (WIFSIGNALED(status) == )
	return (-1);
}

int	launch_tests(t_list **head)
{
	t_list		*node;
	t_unit_test *data;
	int			ret;
	int			exit_code;

	ret = 0;
	node = *head;
	while (node)
	{
		data = node->content;
		exit_code = launch(data);
		if (exit_code)
			ret = -1;
		print_test(data, exit_code);
		node = node->next;
	}
	// ft_lstiter
	return (ret);
}