#include "../test.h"

void	type_c()
{
	if (MANDATORY == 1)
	{
		title("Type c Mandatory: ");
		/*1*/
		{
			PRINT("This %c string is %c been  %c tested %c with %c", 0, 'a', 'b', 'c', 'd', 'e');
		}
		/*2*/
		{
			PRINT("This %c", 0, 0);
		}
		/*3*/
		{
			PRINT("This %c string is %c been  %c tested %c with %c", 0, 'a', 'b', 0, 'd', 'e');
		}
		/*4*/
		{
			PRINT("This %c string is %c been  %c tested %c with %c", 0, 'a', -1, '-', 'd', 'e' -256);
		}
		/*5*/
		{
			PRINT("This %c string is %c been  %c tested %c with %c", 0, '-', 'b', '0' - 256, 'd', 0);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type c Bonus: ");
		/*1 - invalid flags*/
		{
			PRINT("%   ++++##.10c", 0,'F');
		}
		/*2*/
		{
			PRINT("This %-10c", 0, 'A');
		}
		/*3*/
		{
			PRINT("%20c", 0, 'e');
		}
		/*4*/
		{
			PRINT("%-10c", 1, 0);
		}
		/*5*/
		{
			PRINT("%20c", 0, 0);
		}
		putstr_fd("\n", 2);

	}	
}
