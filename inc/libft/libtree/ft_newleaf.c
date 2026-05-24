/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newleaf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:18:53 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 18:37:01 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtree.h"

t_tree	*ft_newleaf(int nbr)
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
