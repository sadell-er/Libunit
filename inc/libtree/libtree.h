/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:13:19 by miricci           #+#    #+#             */
/*   Updated: 2026/01/22 17:17:13 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTREE_H
# define LIBTREE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct s_tree
{
	int	data;
	t_tree	*left;
	t_tree	*right;
}	t_tree;



#endif