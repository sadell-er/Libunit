/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:41:59 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests_bonus.h"

int	isascii_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "ISASCII";
	load_test(name, &testlist, "Basic isascii test", &basic_isascii_test);
	load_test(name, &testlist, "Wrong result test", &isascii_wrong_test);
	load_test(name, &testlist, "Limit test", &isascii_limit_test);
	return (launch_tests(&testlist));
}
