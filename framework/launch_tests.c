/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:42:42 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 19:13:28 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	print_result(int exit_code)
{
	if (exit_code == OK)
		ft_putstr_fd("OK\t:)", STDOUT_FILENO);
	else if (exit_code == KO)
		ft_putstr_fd("KO\t:(", STDOUT_FILENO);
	else if (exit_code == SEGV)
		ft_putstr_fd("SIGSEGV\t:(", STDOUT_FILENO);
	else if (exit_code == BUS)
		ft_putstr_fd("SIGBUS\t:(", STDOUT_FILENO);
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

int	launch_impl(int status)
{
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
	return (-1);
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
	return (launch_impl(status));
}

int	launch_tests(t_list **head)
{
	t_list		*node;
	t_unit_test	*data;
	int			ret;
	int			exit_code;

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
	ft_lstclear(node);
	return (ret);
}
