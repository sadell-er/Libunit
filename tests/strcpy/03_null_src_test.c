/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_src_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:19:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 17:10:47 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

int	null_src_test(void)
{
	char	dst[64];
	char	*s;
	
	s = NULL;
	if (strcpy(dst, s) == NULL)
		return (0);
	return (-1);
}
