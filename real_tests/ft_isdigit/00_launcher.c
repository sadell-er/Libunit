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

int	isdigit_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "ISDIGIT";
	load_test(name, &testlist, "Basic isdigit test", &basic_isdigit_test);
	load_test(name, &testlist, "Wrong result      ", &isdigit_wrong_test);
	load_test(name, &testlist, "Limit test        ", &isdigit_limit_test);
	return (launch_tests(&testlist));
}
