/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:37:33 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 18:40:48 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int	signals_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "signals";
	load_test(name, &testlist, "Test SIGABRT signal", &test_abort);
	load_test(name, &testlist, "Test SIGFPE signal", &test_fpe);
	load_test(name, &testlist, "Test SIGPIPE signal", &test_pipe);
	load_test(name, &testlist, "Test SIGILL signal", &test_ill);
	return (launch_tests(&testlist));
}
