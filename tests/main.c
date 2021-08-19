#include "../test.h"
/* 
int	main(void)
{
	printf("%sMandatory:\n", CYN);
	type_c();
	type_s();
	type_p_tester();
	type_x_tester();
	type_d_tester();
	type_i_tester();
	type_u_tester();
	type_percent_tester(); 
	//ft_printf("%d", 013);
	
	return (0);
}
 */


int main(void)
{
	{
		PRINT("Hello World! %d", 0,  10)
	}
	{
		PRINT("Hello World! %d %d %d %d", 0,  10, 10, 10, 10)
	}
	return (0);
}

