#include "../ft_isdigit.c"
#include "test.h"
#include <stdio.h>

void	test(char c)
{
	printf("char: %c | res: %d\n", c, ft_isdigit(c));	
}

int main()
{
	for (char c = 47; c <= 58; c++)
	{
		test(c);
	}	
}
