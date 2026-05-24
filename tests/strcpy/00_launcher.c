/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 14:10:23 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "libunit.h"

int	strcpy_launcher(void)
{
	t_list	*testlist;
	char		*name;

	testlist = NULL;
	name = "STRCPY";
	load_test(name, &testlist, "Basic strcpy test", &basic_strcpy_test);
	load_test(name, &testlist, "Wrong result test", &wrong_result_test);
	load_test(name, &testlist, "NULL src test", &null_src_test);
	load_test(name, &testlist, "Bus error test", &strcpy_bus_error_test);
	return (launch_tests(&testlist));
}
