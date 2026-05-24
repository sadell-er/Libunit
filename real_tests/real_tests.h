/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:30:36 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/24 16:40:19 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include "libunit.h"

int	isalnum_launcher(void);
int	basic_isalnum_test(void);
int	isalnum_wrong_test(void);
int	isalnum_limit_test(void);

int	isalpha_launcher(void);
int	basic_isalpha_test(void);
int	isalpha_wrong_test(void);
int	isalpha_limit_test(void);

int	isascii_launcher(void);
int	basic_isascii_test(void);
int	isascii_wrong_test(void);
int	isascii_limit_test(void);

int	isdigit_launcher(void);
int	basic_isdigit_test(void);
int	isdigit_wrong_test(void);
int	isdigit_limit_test(void);

int	isprint_launcher(void);
int	basic_isprint_test(void);
int	isprint_wrong_test(void);
int	isprint_limit_test(void);

int	tolower_launcher(void);
int	basic_tolower_test(void);
int	tolower_wrong_test(void);
int	tolower_limit_test(void);

int	toupper_launcher(void);
int	basic_toupper_test(void);
int	toupper_wrong_test(void);
int	toupper_limit_test(void);

#endif