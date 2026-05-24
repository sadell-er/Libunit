/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:03:50 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:48:52 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_result(int exit_code)
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
	else
	{
		ft_putstr_fd("UNKNOWN (", STDOUT_FILENO);
		ft_putnbr_fd(exit_code, STDOUT_FILENO);
		ft_putstr_fd(")", STDOUT_FILENO);
	}
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
	ft_putstr_fd("\x1b[90mTests: ", STDOUT_FILENO);
	ft_putnbr_fd(len - tot, STDOUT_FILENO);
	ft_putstr_fd("/", STDOUT_FILENO);
	ft_putnbr_fd(len, STDOUT_FILENO);
	ft_putendl_fd("\n\x1b[0m", STDOUT_FILENO);
}
