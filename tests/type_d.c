#include "../test.h"


void	type_d_tester()
{
	if (MANDATORY == 1)
	{
		title("Type d Mandatory: ");
		/*1*/
		{
			PRINT("testing %d with %d buyalaka %d", 0, 1567, -42131, 0);
		}
		/*2*/
		{
			PRINT("testing %d with %d buyalaka %d %d", 0, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN);
		}
		/*3*/
		{
			PRINT("%d lets to  that %d", 0, 0xFFF, 0xFFFF);
		}
		/*4*/
		{
			PRINT("Just a normal day %d %d %d %d %d %d %d %d %d %d %d", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type d Bonus: ");
		/*1 */
		{
			PRINT("Its duel time %-###10d %-###20d %##-30d", 0, 42, 42, 42);
		}
		/*2*/
		{
			PRINT("Its duel time %10d %20d %30d", 0, 42, 42, 42);
		}
		/*3*/
		{
			PRINT("Its duel time %.10d %.13d %.16d", 0, 42, 42, 42);
		}
		/*4*/
		{
			PRINT("Its duel time % d %+d % +d", 0, 42, 42, 42);
		}
		/*5*/
		{
			PRINT("Its duel time % d %+d % +d", 0, 42, 42, 42);
		}
		/*6*/
		{
			PRINT("Its duel time %015d %14.8d %-8.5d", 0, 42, 42, 42);
		}
		/*6*/
		{
			PRINT("Its duel time %+# 10.4d %+ #-3.5d %010.4d", 0, 42, 42, 42);
		}
		putstr_fd("\n", 2);

	}
}