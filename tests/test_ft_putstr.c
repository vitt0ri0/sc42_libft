#include "../libft.h"
#include "../ft_putstr.c"
#include <stdio.h>

int	main(void)
{
	char *str[9];
	str[0] = "";
	str[1] = " _ ";
	str[2] = "new123!";
	str[3] = "new_;";
	str[4] = "aSrDy_ ; er";
	str[5] = "  buf \0 asd";
	str[6] = "1234567890abcdefghyzklmnopxyztuw";
	str[7] = "not gREAT, nOt terrible!";
	str[8] = "\0";

	for (int i = 0; i < 9; i++)
	{
		ft_putstr(str[i]);
		printf(" | %s\n", str[i]);
	}
	return (0);
}
