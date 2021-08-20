#include "../test.h"


void	type_s()
{

	if (MANDATORY == 1)
	{
		title("Type s Mandatory: ");
		/*1*/
		{
			PRINT("SImples case %s %s %s", 0,"testing", "hi", 0);
		}
		/*2*/
		{
			PRINT("%s", 0,"peneumutramicroscopiocilicavocaniocaniotico");
		}
		/*3*/
		{
			PRINT("%s%s%s%s%s%s%s%s%s", 0, 0, 0, 0, 0, 0, "six", "seven", "eight", "nine");
		}
		/*4*/
		{
			PRINT("hello guys %s this is a %s", 0, "", "string");
		}
		putstr_fd("\n", 2);
	}
	if (BONUS)
	{
		title("Type s Bonus: ");
		/*1 - invalid flags*/
		{
			PRINT("%   +000+++##s", 0, "Lets test these invalid flags");
		}
		/*2*/
		{
			PRINT("Hello %10s are you %-10s %####+++  000-15s", 0, "I'm FLavio", "Ok?", "I'm very Well");
		}
		/*3*/
		{
			PRINT("Here we go %.3s", 0, "String that will be cuted");
		}
		/*4*/
		{
			PRINT("Sasageyo!%-10.5s%13.3s", 0, "Sasageyo!", "Sasageyo!");
		}
		/*5*/
		{
			PRINT("%##-++ -10.3s %##-++ 10.3s", 0, 0, 0);
		}
		putstr_fd("\n", 2);

	}
}