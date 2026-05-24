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

int	isalpha_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "ISALPHA";
	load_test(name, &testlist, "Basic isalpha test", &basic_isalpha_test);
	load_test(name, &testlist, "Wrong result test", &isalpha_wrong_test);
	load_test(name, &testlist, "Limit test", &isalpha_limit_test);
	return (launch_tests(&testlist));
}
