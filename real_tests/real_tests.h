/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:30:36 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 20:37:00 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include "../libunit.h"

int	ft_strlen_launcher(void);
int	basic_test(void);
int	null_test(void);
int	bigger_str_test(void);

int	ft_strcpy_launcher(void);
int	basic_strcpy_test(void);
int	wrong_result_test(void);
int	null_src_test(void);
int	strcpy_bus_error_test(void);

#endif