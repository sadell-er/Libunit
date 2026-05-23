/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:16 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 15:53:31 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	null_testtest(void)
{
	char *str = 0;
	int i = strlen(str);
	return i;
}

int main()
{
	null_testtest();
}