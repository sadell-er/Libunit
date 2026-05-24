/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 21:07:42 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	isprint_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "ISPRINT";
	load_test(name, &testlist, "Basic isprint test", &basic_isprint_test);
	load_test(name, &testlist, "Wrong result      ", &isprint_wrong_test);
	load_test(name, &testlist, "Limit test        ", &isprint_limit_test);
	return (launch_tests(&testlist));
}
