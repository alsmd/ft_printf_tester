/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:28:15 by flavio            #+#    #+#             */
/*   Updated: 2021/08/21 06:27:08 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
#define PRINT_H
#include <strings.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/*-------Cores-------*/
#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYN "\e[0;36m"
#define WHITE "\e[0;37m"
void	redirect(char *name);
void	putstr_fd(char *s, int fd);
void	check(short int codition);
void	show_log(char *buffer_1, char *buffer_2, int r_1, int r_2);
void	putnbr(int n, int fd);

#define PRINT(string, show,...) \
char	buffer_1[1000]; \
char	buffer_2[1000]; \
int		r_1; \
int		r_2; \
bzero(buffer_1, 1000); \
bzero(buffer_2, 1000); \
redirect("tmp"); \
r_1 = ft_printf(string, __VA_ARGS__); \
lseek(1, 0, SEEK_SET); \
read(1, buffer_1, 1000); \
redirect("tmp2"); \
r_2 = printf(string, __VA_ARGS__); \
fflush(stdout); \
lseek(1, 0, SEEK_SET); \
read(1, buffer_2, 1000); \
check(!(strcmp(buffer_1, buffer_2))); \
check(r_1 == r_2); \
unlink("tmp"); \
unlink("tmp2"); \
if (((strcmp(buffer_1, buffer_2)) || r_1 != r_2) || show)\
	show_log(buffer_1, buffer_2, r_1, r_2);
#endif