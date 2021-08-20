#include "../test.h"


void	type_p_tester()
{
	int	test;

	test = 0;
	if (MANDATORY == 1)
	{
		title("Type p Mandatory: ");
		/*1*/
		{
			PRINT("testing %p with %p buyalaka %p", 0, &test, 0, &test);
		}
		/*2*/
		{
			PRINT("testing %p with %p buyalaka %p %p", 0, INT_MIN, INT_MAX, LONG_MAX, LONG_MIN);
		}
		/*3*/
		{
			PRINT("%p lets to  that %p", 0, "hehe", "haha");
		}
		/*4*/
		{
			PRINT("Just a normal day %p %p %p %p %p %p %p %p %p %p %p", 0, &test, &test + 10, &test + 20, &test + 30, &test + 40, &test + 50, &test + 60, &test + 70, &test + 80, &test - 10, &test - 20);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type p Bonus: ");
		/*1 */
		{
			PRINT("Its duel time %-###10p %-###20p %-30p", 0, &test, &test, &test);
		}
		/*2*/
		{
			PRINT("Its duel time %#### +10p %20p %## +30p", 0, &test, &test, 0);
		}
		/*3*/
		{
			PRINT("%## -+.10p", 0, 0, &test, &test);
		}
		/*4*/
		{
			PRINT("Its duel time % p %+p % +p", 0, &test, &test, &test);
		}
		/*5*/
		{
			PRINT("Its duel time %#0-+ 10.15p %016p %01p", 0, &test, &test, &test);
		}
		/*6*/
		{
			PRINT("Its duel time %015.5p %-024.13p %-2.3u", 0, &test, &test, &test);
		}
		/*6*/
		{
			PRINT("Its duel time %+# 20.14p %+ #-20.15p %010.4p", 0, &test, &test, &test);
		}
		/*6*/
		{
			PRINT("Its duel time %+ 20.14p %+ -20.15p %#010.4p", 0, &test, &test, &test);
		}
		putstr_fd("\n", 2);
	}
}