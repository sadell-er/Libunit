/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:28:50 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 15:47:11 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsimplelist.h"


void	print_list(t_list **head, char *list_name)
{
	t_list	*node;
	int		i;

	i = 1;
	node = *head;
	ft_printf("\n------------%s---------------\n", list_name);
	while (node)
	{
		ft_printf("node %d: \n", i);
		ft_printf("content: %p\n", node->content);
		ft_printf("next: %p\n", node->next);
		node = node->next;
		i++;
	}
	ft_printf("------------%s---------------\n\n", list_name);
}
