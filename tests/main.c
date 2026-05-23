/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 18:57:33 by sadell-e         ###   ########.fr       */
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
