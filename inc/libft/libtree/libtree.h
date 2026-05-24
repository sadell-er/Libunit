/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:13:19 by miricci           #+#    #+#             */
/*   Updated: 2026/05/24 18:38:14 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTREE_H
# define LIBTREE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_tree
{
	int		data;
	t_tree	*left;
	t_tree	*right;
}			t_tree;

#endif