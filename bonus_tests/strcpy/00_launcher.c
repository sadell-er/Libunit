/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 21:10:33 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

int	strcpy_launcher(void)
{
	t_list		*testlist;
	char		*name;

	testlist = NULL;
	name = "STRCPY";
	load_test(name, &testlist, "Basic strcpy test         ", &basic_strcpy_test);
	load_test(name, &testlist, "Wrong result              ", &wrong_result_test);
	load_test(name, &testlist, "NULL src test             ", &null_src_test);
	load_test(name, &testlist, "Bus error test            ", &strcpy_bus_error_test);
	return (launch_tests(&testlist));
}
