/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:12:05 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 18:20:48 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libunit.h"

int	basic_strcpy_test(void)
{
	char	dst[64];

	strcpy(dst, "hello");
	if (strcmp(dst, "hello") == 0)
		return (0);
	return (-1);
}
