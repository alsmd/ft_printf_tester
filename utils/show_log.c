/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_log.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:00:18 by flavio            #+#    #+#             */
/*   Updated: 2021/08/19 13:08:32 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	show_log(char *buffer_1, char *buffer_2, int r_1, int r_2)
{
	unlink("log");
	redirect("log");
	write(1, "ft_printf:", 10);
	putstr_fd(RED, 1);
	write(1, "\n", 1);
	write(1, buffer_1, r_1);
	write(1, "\n", 1);
	putstr_fd(WHITE, 1);
	write(1, "printf:", 7);
	putstr_fd(GREEN, 1);
	write(1, "\n", 1);
	write(1, buffer_2, r_2);
	write(1, "\n", 1);
	putstr_fd(WHITE, 1);
	write(1, "ft_printf return:", 17);
	putstr_fd(RED, 1);
	write(1, "\n", 1);
	putnbr(r_1, 1);
	write(1, "\n", 1);
	putstr_fd(WHITE, 1);
	write(1, "printf return:", 14);
	putstr_fd(GREEN, 1);
	write(1, "\n", 1);
	putnbr(r_2, 1);
	write(1, "\n", 1);
	putstr_fd(RED, 2);
	putstr_fd("\n\"cat log\" to show printf's and ft_printf's return\n", 2);
	putstr_fd(WHITE, 2);
	exit(1);
}
