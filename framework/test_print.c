/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:03:50 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:16:45 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"

void	print_result(int exit_code)
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

void	print_test(t_unit_test *data, int exit_code)
{
	ft_putstr_fd(data->func_name, STDOUT_FILENO);
	ft_putstr_fd(":\t", STDOUT_FILENO);
	ft_putstr_fd(data->test_name, STDOUT_FILENO);
	ft_putstr_fd(":\t", STDOUT_FILENO);
	print_result(exit_code);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

void	tot_print(int tot, int len)
{
	ft_putstr_fd("Tests: ", STDOUT_FILENO);
	ft_putnbr_fd(len - tot, STDOUT_FILENO);
	ft_putstr_fd("/", STDOUT_FILENO);
	ft_putnbr_fd(len, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
}
