/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_wrong_result_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:19:25 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 17:10:45 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

int	wrong_result_test(void)
{
	char	dst[64];

	strcpy(dst, "world");
	if (strcmp(dst, "earth") == 0)
		return (0);
	return (-1);
}
