/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:51:30 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests_bonus.h"

int	main(void)
{
	ft_putendl_fd("\n\x1b[34m===\tREAL TESTS\t===\x1b[0m\n", STDOUT_FILENO);
	isalnum_launcher();
	isalpha_launcher();
	isascii_launcher();
	isdigit_launcher();
	isprint_launcher();
	tolower_launcher();
	toupper_launcher();
	return (0);
}
