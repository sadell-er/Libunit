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

int	isalpha_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "ISALPHA";
	load_test(name, &testlist, "Basic isalpha test", &basic_isalpha_test);
	load_test(name, &testlist, "Wrong result      ", &isalpha_wrong_test);
	load_test(name, &testlist, "Limit test        ", &isalpha_limit_test);
	return (launch_tests(&testlist));
}
