/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:22 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 16:26:02 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	main(void)
{
	int	result;

	result = 0;
	result += isalnum_launcher();
	result += isalpha_launcher();
	result += isascii_launcher();
	result += isdigit_launcher();
	result += isprint_launcher();
	result += tolower_launcher();
	result += toupper_launcher();
	if (result != 0)
	{
		printf("si");
		return (-1);
		
	}
	return (0);
}
