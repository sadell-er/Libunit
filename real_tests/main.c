/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:43:56 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	main(void)
{
	int	result;

	ft_putendl_fd("\n\x1b[34m===\tTESTS\t===\x1b[0m\n", STDOUT_FILENO);
	result = 0;
	result += isalnum_launcher();
	result += isalpha_launcher();
	result += isascii_launcher();
	result += isdigit_launcher();
	result += isprint_launcher();
	result += tolower_launcher();
	result += toupper_launcher();
	if (result != 0)
		return (-1);
	return (0);
}
