/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:25:54 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 18:40:32 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*mk_test_data(char *func_name, char *test_name, int (*f)(void))
{
	t_unit_test	*data;

	data = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!data)
		return (NULL);
	data->func_name = func_name;
	data->test_name = test_name;
	data->fun = f;
	return (data);
}

t_list	**mk_test_list(void)
{
	t_list	**head;

	head = (t_list **)malloc(sizeof(t_list *));
	*head = NULL;
	return (head);
}

void	load_test(char *func_name, t_list **testlist,
					char *test_name, int (*f)(void))
{
	t_list	*node;

	if (!testlist)
		return ;
	else if (!*testlist)
	{
		*testlist = ft_lstnew(mk_test_data(func_name, test_name, f));
		return ;
	}
	node = ft_lstlast(*testlist);
	node->next = ft_lstnew(mk_test_data(func_name, test_name, f));
}
