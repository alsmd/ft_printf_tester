#include "../test.h"

void	mcheck(void	*ptr, size_t size)
{
	if (malloc_usable_size(ptr) == size)
		printf("%s MOK %s", GREEN, WHITE);
	else
		printf("%s MKO %s", RED, WHITE);
}
