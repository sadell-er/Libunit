/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:31 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 12:15:02 by miricci          ###   ########.fr       */
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
# include <fcntl.h>
# include <sys/mman.h>
# include <sys/stat.h>
# include <stdbool.h>
# include <wait.h>

# include "libft.h"

enum	e_type_of_exit
{
	OK,
	KO,
	SEGV,
	BUS
};

typedef struct s_unit_test
{
	char			*func_name;
	char				*test_name;
	int					(*fun)(void);
}					t_unit_test;

void	load_test(char *func_name, t_list **testlist, char *name, int (*f)(void));
int		launch_tests(t_list **head);

#endif