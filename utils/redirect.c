#include "../test.h"

void	redirect(char *name)
{
	close(1);
	open(name, O_RDWR | O_CREAT, 0777);
}
