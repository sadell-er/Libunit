/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:42:42 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 20:46:47 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	launch_impl(int status)
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
	int			tot;

	ret = 0;
	tot = 0;
	node = *head;
	while (node)
	{
		data = node->content;
		exit_code = launch(head, data);
		if (exit_code)
		{
			ret = -1;
			tot += 1;
		}
		print_test(data, exit_code);
		node = node->next;
	}
	tot_print(tot, ft_lstsize(*head));
	node = *head;
	return (ft_lstclear(node), ret);
}
