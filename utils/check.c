#include "../test.h"


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
