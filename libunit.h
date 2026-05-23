/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:45:31 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 18:45:00 by sadell-e         ###   ########.fr       */
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

typedef struct s_unit_test
{
	char				*name;
	int					(*fun)(void);
	struct s_unit_test	*next;
}					t_unit_test;

void	load_test();
int		launch_tests();

#endif