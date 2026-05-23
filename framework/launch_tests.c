/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:42:42 by miricci           #+#    #+#             */
/*   Updated: 2026/05/23 19:05:34 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

void	print_test(t_unit_test *data, int exit_code)
{
	ft_putstr(data->func_name);
	ft_putstr(": ");
	ft_putstr(data->test_name);
	ft_putstr(": ");
	ft_putnbr(exit_code);
	ft_putchar('\n');
}

int	launch(t_unit_test *data)
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
		else if (WEXITSTATUS(status) == -1)
			return (KO);
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == 11)
			return (SEGV);
		else if (WTERMSIG(status) == 7)
			return (BUS);
	}
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
	return (ret);
}