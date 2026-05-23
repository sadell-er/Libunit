/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_wrong_result_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:19:25 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 18:20:23 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libunit.h"

int	wrong_result_test(void)
{
	char	dst[64];

	strcpy(dst, "world");
	if (strcmp(dst, "earth") == 0)
		return (0);
	return (-1);
}
