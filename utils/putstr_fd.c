#include "../test.h"

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