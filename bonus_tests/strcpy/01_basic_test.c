/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:12:05 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 17:10:43 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

int	basic_strcpy_test(void)
{
	char	dst[64];

	strcpy(dst, "hello");
	if (strcmp(dst, "hello") == 0)
		return (0);
	return (-1);
}
