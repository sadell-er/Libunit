/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 16:34:47 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	isalnum_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "ISALNUM";
	load_test(name, &testlist, "Basic isalnum test", &basic_isalnum_test);
	load_test(name, &testlist, "Wrong result test", &isalnum_wrong_test);
	load_test(name, &testlist, "Limit test", &isalnum_limit_test);
	return (launch_tests(&testlist));
}
