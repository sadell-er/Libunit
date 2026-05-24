/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_spaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:34:25 by miricci           #+#    #+#             */
/*   Updated: 2026/01/29 11:34:38 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_spaces(char *line, int count)
{
	while (line[count] == ' ' || line[count] == '\f' || line[count] == '\r'
		|| line[count] == '\t' || line[count] == '\v')
		count++;
	return (count);
}
