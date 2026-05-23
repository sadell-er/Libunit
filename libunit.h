/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:31 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 15:46:10 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_unit_test
{
	char				*name;
	int					(*fun)(void);
	struct s_unit_test	*next;
}					t_unit_test;

void	load_test();
int		launch_tests();

#endif