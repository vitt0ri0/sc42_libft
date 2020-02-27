#include "../libft.h"
#include "../ft_putchar.c"
#include "../ft_putendl.c"
#include <stdio.h>

int	main(void)
{
	char *str[9];
	str[0] = "";
	str[1] = " _ ";
	str[2] = "new123!";
	str[3] = "neeew_;";
	str[4] = "array_ ;;; aer";
	str[5] = "  sdf  \0 asd";
	str[6] = "1234567890abcdefghyzklmnopxyztuw";
	str[7] = "not great not terrible!";
	str[8] = "\0";

	for (int i = 0; i < 9; i++)
	{
		ft_putendl(str[i]);
		printf(" : \n%s\n _________________ \n", str[i]);
	}
	return (0);
}
