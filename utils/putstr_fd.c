#include "../test.h"
static void	recursive(int n, int fd)
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