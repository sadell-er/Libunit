/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 10:19:26 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	int	result;

	result = 0;
	result += strlen_launcher();
	result += strcpy_launcher();
	if (result != 0)
		return (-1);
	return (0);
}
