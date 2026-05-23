/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newleaf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:18:53 by miricci           #+#    #+#             */
/*   Updated: 2026/01/22 17:21:45 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtree.h"

t_tree	*ft_newleaf(int	nbr)
{
	t_tree	*node;
	
	node = (t_tree *)malloc(sizeof(t_tree));
	if (!node)
		return (NULL);
	node->data = nbr;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
