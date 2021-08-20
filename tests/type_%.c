#include "../test.h"


void	type_percent_tester()
{
	if (MANDATORY == 1)
	{
		title("Type % Mandatory: ");
		/*1*/
		{
			PRINT("This %% string is %% been  %%%% tested %%%%%% with %%", 0, 1);
		}
		/*2*/
		{
			PRINT("%%", 0, 1);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type % Bonus: ");
		/*1 - invalid flags*/
		{
			PRINT("%   ++++##.10%", 0, 1);
		}
		/*2*/
		{
			PRINT("This %---------10%", 0, 1);
		}
		/*3*/
		{
			PRINT("%20c", 0, 1);
		}
		/*4*/
		{
			PRINT("%------------10%", 0, 1);
		}
		/*5*/
		{
			PRINT("%##+++---123.123% asdasca %##+++---123.123% asdsa  %##+++---123.123%csac %##+++---123.123%", 0, 1);
		}
		putstr_fd("\n", 2);

	}
}