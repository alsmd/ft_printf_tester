/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:03:57 by flavio            #+#    #+#             */
/*   Updated: 2021/08/19 10:21:20 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
#include <stdio.h>
#include "../include/ft_printf.h"
#include <malloc.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <strings.h>
/*-------Cores-------*/
#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYN "\e[0;36m"
#define WHITE "\e[0;37m"
//utils
void	check(short int codition);
void	title(char	*string);
void	mcheck(void	*ptr, size_t size);
void	redirect(char *name);
void	putstr_fd(char *s, int fd);

//test
void	type_c();
void	type_s();
void	type_p_tester();
void	type_x_tester();
void	type_d_tester();
void	type_i_tester();
void	type_u_tester();
void	type_percent_tester();

/********Teste***************/
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
		if (show)\
		{ \
			unlink("log"); \
			redirect("log"); \
			write(1, "ft_printf:", 10); \
			write(1, "\n", 1); \
			write(1, buffer_1, r_1); \
			write(1, "\n", 1); \
			write(1, "printf:", 7); \
			write(1, "\n", 1); \
			write(1, buffer_2, r_2); \
			write(1, "\n", 1); \
			exit(1); \
		}
#endif