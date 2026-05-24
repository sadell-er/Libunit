/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:20:43 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 20:43:13 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	ft_putendl_fd("\n\x1b[34m===\tTESTS\t===\x1b[0m\n", STDOUT_FILENO);
	strlen_launcher();
	strcpy_launcher();
	signals_launcher();
	return (0);
}
