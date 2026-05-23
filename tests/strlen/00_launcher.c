/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:00 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 20:30:50 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "libunit.h"

int	strlen_launcher(void)
{
	t_list	*testlist;
	char		*name;

	name = "STRLEN";
	load_test(name, &testlist, "Basic test", &basic_test);
	load_test(name, &testlist, "NULL test", &null_test);
	load_test(name, &testlist, "Bigger string test", &bigger_str_test);
	return (launch_tests(&testlist));
}
