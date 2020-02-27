#include "../isdigit.c"
#include "test.h"
//#include <stdio.h>

void	test(char c)
{
	printf("char: %c | res: %d\n", c, isdigit(c));	
}

int main()
{
	for (char c = 47; c <= 58; c++)
	{
		test(c);
	}	
}
