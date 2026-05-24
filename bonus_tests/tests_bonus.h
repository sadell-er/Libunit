/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <miricci@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:39:37 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 20:52:11 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_BONUS_H
# define TESTS_BONUS_H

# include "libunit.h"

int	strlen_launcher(void);
int	basic_test(void);
int	null_test(void);
int	bigger_str_test(void);

int	strcpy_launcher(void);
int	basic_strcpy_test(void);
int	wrong_result_test(void);
int	null_src_test(void);
int	strcpy_bus_error_test(void);

int	signals_launcher(void);
int	test_abort(void);
int	test_pipe(void);
int	test_fpe(void);
int	test_ill(void);

#endif