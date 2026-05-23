/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadell-e <sadell-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:19:28 by sadell-e          #+#    #+#             */
/*   Updated: 2026/05/23 18:58:18 by sadell-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libunit.h"

int	strcpy_bus_error_test(void)
{
	int		fd;
	char	*mapped;

	fd = open("temp_file", O_RDWR | O_CREAT, 0666);
	mapped = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	close(fd);
	unlink("temp_file");
	strcpy(mapped, "Causa SIGBUS");
	munmap(mapped, 4096);
	return (-1);
}
