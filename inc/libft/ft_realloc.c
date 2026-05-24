/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:28:44 by miricci           #+#    #+#             */
/*   Updated: 2026/02/09 16:16:09 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*ret;

	if (ptr == NULL)
		return (malloc(new_size));
	else if (ptr != NULL && new_size == 0)
		return (free(ptr), NULL);
	ret = malloc(new_size);
	if (ret == NULL)
		return (NULL);
	ft_memmove(ret, ptr, old_size);
	free(ptr);
	return (ret);
}
