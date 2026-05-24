/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:35:58 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests_bonus.h"

int	tolower_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "TOLOWER";
	load_test(name, &testlist, "Basic tolower test", &basic_tolower_test);
	load_test(name, &testlist, "Wrong result test", &tolower_wrong_test);
	load_test(name, &testlist, "Limit test", &tolower_limit_test);
	return (launch_tests(&testlist));
}
