/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 19:24:11 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libunit.h"
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
