#include "../test.h"


void	type_x_tester()
{
	if (MANDATORY == 1)
	{
		title("Type x Mandatory: ");
		/*1*/
		{
			PRINT("testing %x with %x buyalaka %x", 0, 1567, -42131, 0);
		}
		/*2*/
		{
			PRINT("testing %x with %x buyalaka %x %x", 0, INT_MIN, INT_MAX, LONG_MAX, LONG_MIN);
		}
		/*3*/
		{
			PRINT("%x lets to  that %x", 0, -1, 0xFFFF);
		}
		/*4*/
		{
			PRINT("Just a normal day %x %x %x %x %x %x %x %x %x %x %x", 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110);
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type x Bonus: ");
		/*1 */
		{
			PRINT("Its duel time %-###10x %-###20x %-30x", 0, 0x424242, 0x424242, 0x424242);
		}
		/*2*/
		{
			PRINT("Its duel time %#### +10x %20x %## +30x", 0, 0x424242, 0x424242, 0x424242);
		}
		/*3*/
		{
			PRINT("Its duel time %## -+.10x %.13x %#.16x", 0, 0x424242, 0x424242, 0x424242);
		}
		/*4*/
		{
			PRINT("Its duel time % x %+x % +x", 0, 0x424242, 0x424242, 0x424242);
		}
		/*5*/
		{
			PRINT("Its duel time %#0-+ 10.15x %016x %01x", 0, 0x424242, 0x424242, 0x424242);
		}
		/*6*/
		{
			PRINT("Its duel time %015.5x %-024.13x %-2.3u", 0, 0x424242, 0x424242, 0x424242);
		}
		/*6*/
		{
			PRINT("Its duel time %+# 20.14x %+ #-20.15x %010.4x", 0, 0x424242, 0x424242, 0x424242);
		}
		/*6*/
		{
			PRINT("Its duel time %+ 20.14x %+ -20.15x %#010.4x", 0, 0x424242, 0x424242, 0x424242);
		}
		putstr_fd("\n", 2);
	}
}