/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:25:54 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 14:49:46 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libunit.h"

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

t_list	**mk_test_list()
{
	t_list	**head;
	
	head = (t_list **)malloc(sizeof(t_list *));
	*head = NULL;
	return (head);
}

void	load_test(char *func_name, t_list **testlist, char *test_name, int (*f)(void))
{
	t_list *node;
	
	if (!testlist)
        return ;
	if (!*testlist)
	{
		*testlist = ft_lstnew(mk_test_data(func_name, test_name, f));
		// print_list(testlist, "testlist");
		return ;
	}
	// print_list(testlist, "testlist");
	node = ft_lstlast(*testlist);
	node->next = ft_lstnew(mk_test_data(func_name, test_name, f));
	// print_list(testlist, "testlist");
}