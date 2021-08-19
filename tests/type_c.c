#include "../test.h"




void	type_c()
{
	if (MANDATORY == 1)
	{
		title("Type c Mandatory: ");
		/*1*/
		{
			PRINT("This %c string is %c been  %c tested %c with %c", 1, 'a', 'b', 'c', 'd', 'e');
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type c Bonus: ");
		putstr_fd("\n", 2);

	}	
}
