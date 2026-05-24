/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:00 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 18:30:15 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

int	strlen_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "STRLEN";
	load_test(name, &testlist, "Basic test", &basic_test);
	load_test(name, &testlist, "NULL test", &null_test);
	load_test(name, &testlist, "Bigger string test", &bigger_str_test);
	return (launch_tests(&testlist));
}
