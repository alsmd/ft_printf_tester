#include "../test.h"


void	type_i_tester()
{
	if (MANDATORY == 1)
	{
		title("Type i Maniatory: ");
		/*1*/
		{
			PRINT("testing %i with %i buyalaka %i", 0, 1567, -42131, 0);
		}
		/*2*/
		{
			PRINT("testing %i with %i buyalaka %i %i", 0, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN);
		}
		/*3*/
		{
			PRINT("%i lets to  that %i", 0, 0xFFF, 0xFFFF);
		}
		/*4*/
		{
			PRINT("Just a normal day %i %i %i %i %i %i %i %i %i %i %i", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type i Bonus: ");
		/*1 */
		{
			PRINT("Its duel time %-###10i %-###20i %##-30i", 0, 42, 42, 42);
		}
		/*2*/
		{
			PRINT("Its duel time %10i %20i %30i", 0, 42, 42, 42);
		}
		/*3*/
		{
			PRINT("Its duel time %.10i %.13i %.16i", 0, 42, 42, 42);
		}
		/*4*/
		{
			PRINT("Its duel time % i %+i % +i", 0, 42, 42, 42);
		}
		/*5*/
		{
			PRINT("Its duel time % i %+i % +i", 0, 42, 42, 42);
		}
		/*6*/
		{
			PRINT("Its duel time %015i %14.8i %-8.5i", 0, 42, 42, 42);
		}
		/*6*/
		{
			PRINT("Its duel time %+# 10.4i %+ #-3.5i %010.4i", 0, 42, 42, 42);
		}
		putstr_fd("\n", 2);

	}
}