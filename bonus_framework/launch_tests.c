/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:42:42 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 18:09:30 by miricci          ###   ########.fr       */
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
	else if (exit_code == ABRT)
		ft_putstr_fd("\x1b[33mSIGABRT\t:(\x1b[0m", STDOUT_FILENO);
	else if (exit_code == FPE)
		ft_putstr_fd("\x1b[33mSIGFPE\t:(\x1b[0m", STDOUT_FILENO);
	else if (exit_code == PIPE)
		ft_putstr_fd("\x1b[33mSIGPIPE\t:(\x1b[0m", STDOUT_FILENO);
	else if (exit_code == ILL)
		ft_putstr_fd("\x1b[33mSIGILL\t:(\x1b[0m", STDOUT_FILENO);
	else {
	    ft_putstr_fd("UNKNOWN (", STDOUT_FILENO);
	    ft_putnbr_fd(exit_code, STDOUT_FILENO);
	    ft_putstr_fd(")", STDOUT_FILENO);
	}
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

static int	launch(t_list **head, t_unit_test *data)
{
	pid_t	pid;
	int		status;
	int		(*f)(void);
	t_list	*node;
	t_list	*tmp;

	pid = fork();
	if (pid < 0)
		return (-1);
	if (pid == 0)
	{
		f = data->fun;
		node = *head;
		while (node)
		{
			tmp = node->next;
			free(node->content);
			free(node);
			node = tmp;
		}
		exit(f());
	}
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
		else if (WTERMSIG(status) == 6)
			return (ABRT);
		else if (WTERMSIG(status) == 8)
			return (FPE);
		else if (WTERMSIG(status) == 13)
			return (PIPE);
		else if (WTERMSIG(status) == 4)
			return (ILL);
	}
	return (printf("DHN"), -1);
}

int	launch_tests(t_list **head)
{
	t_list		*node;
	t_unit_test *data;
	int			ret;
	int			exit_code;
	t_list	*tmp;

	ret = 0;
	node = *head;
	while (node)
	{
		data = node->content;
		exit_code = launch(head, data);
		if (exit_code)
			ret = -1;
		print_test(data, exit_code);
		node = node->next;
	}
	node = *head;
	while (node)
	{
		tmp = node->next;
		free(node->content);
		free(node);
		node = tmp;
	}
	return (ret);
}