#include "print.h"

void	redirect(char *name)
{
	close(1);
	open(name, O_RDWR | O_CREAT, 0777);
}

void	putstr_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (s)
	{
		while (s[index])
		{
			write(fd, &s[index], 1);
			index++;
		}
	}
}

void	check(short int codition)
{
	if (codition)
	{
		putstr_fd(GREEN, 2);
		putstr_fd(" OK ", 2);
		putstr_fd(WHITE, 2);
	}
	else
	{
		putstr_fd(RED, 2);
		putstr_fd("KO", 2);
		putstr_fd(WHITE, 2);
	}
}
void	recursive(int n, int fd)
{
	int	digit;

	digit = n % 10;
	if (n)
	{
		recursive(n / 10, fd);
		digit += 48;
		write(fd, &digit, 1);
	}
}

void	putnbr(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		recursive(n, fd);
	}
}

void	show_log(char *buffer_1, char *buffer_2, int r_1, int r_2)
{
	unlink("log");
	redirect("log");
	write(1, "ft_printf:", 10);
	putstr_fd(RED, 1);
	write(1, "\n", 1);
	write(1, "|", 1);
	write(1, buffer_1, r_1);
	write(1, "|", 1);
	write(1, "\n", 1);
	putstr_fd(WHITE, 1);
	write(1, "printf:", 7);
	putstr_fd(GREEN, 1);
	write(1, "\n", 1);
	write(1, "|", 1);
	write(1, buffer_2, r_2);
	write(1, "|", 1);
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