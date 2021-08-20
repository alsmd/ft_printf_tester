#include "../test.h"


void	type_u_tester()
{
	if (MANDATORY == 1)
	{
		title("Type u Mandatory: ");
		/*1*/
		{
			PRINT("testing %u with %u buyalaka %u", 0, 1567, -42131, 0);
		}
		/*2*/
		{
			PRINT("testing %u with %u buyalaka %u %u", 0, LONG_MAX, 42, LONG_MAX, LONG_MIN);
		}
		/*3*/
		{
			PRINT("%u lets to  that %u", 0, -1, 0xFFFF);
		}
		/*4*/
		{
			PRINT("Just a normal day %u %u %u %u %u %u %u %u %u %u %u", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type u Bonus: ");
		/*1 */
		{
			PRINT("Its duel time %-###10u %-###20u %##-30u", 0, 42, 42, 42);
		}
		/*2*/
		{
			PRINT("Its duel time %10u %20u %30u", 0, 42, 42, 42);
		}
		/*3*/
		{
			PRINT("Its duel time %.10u %.13u %.16u", 0, 42, 42, 42);
		}
		/*4*/
		{
			PRINT("Its duel time % u %+u % +u", 0, 42, 42, 42);
		}
		/*5*/
		{
			PRINT("Its duel time % u %+u % +u", 0, 42, 42, 42);
		}
		/*6*/
		{
			PRINT("Its duel time %015u %14.8u %-8.5u", 0, 42, 42, 42);
		}
		/*6*/
		{
			PRINT("Its duel time %+# 10.4u %+ #-3.5u %010.4u", 0, 42, 42, 42);
		}
		putstr_fd("\n", 2);
	}
}