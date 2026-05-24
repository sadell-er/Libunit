/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_src_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:19:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 18:30:55 by sadell-e         ###   ########.fr       */
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
