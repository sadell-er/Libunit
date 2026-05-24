/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:11:47 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 16:36:05 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	toupper_launcher(void)
{
	t_list	*testlist;
	char	*name;

	testlist = NULL;
	name = "TOUPPER";
	load_test(name, &testlist, "Basic toupper test", &basic_toupper_test);
	load_test(name, &testlist, "Wrong result test", &toupper_wrong_test);
	load_test(name, &testlist, "Limit test", &toupper_limit_test);
	return (launch_tests(&testlist));
}
