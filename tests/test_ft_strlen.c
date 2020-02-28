#include <stdio.h>
#include "../ft_strlen.c"
#include "../ft_strlen_e.c"
#include <string.h>

int main()
{
	char *str1[10];
	str1[0] = "";
	str1[1] = "text";
	str1[2] = "another One TeXt";
	str1[3] = "12 tEst Test";
	str1[4] = " ";
	str1[5] = "NaN enum";
	str1[6] = "kek lol";
	str1[7] = "one two free";
	str1[8] = " _ _ _ _ \0";
	str1[9] = "sdasdas";

	for(int i = 0; i < 10; i++)
	{
		printf("str: %s | len(k): %ld | len(e): %ld | answ: %s\n", str1[i], ft_strlen(str1[i]), ft_strlen_e(str1[i]), ft_strlen(str1[i]) ==  strlen(str1[i]) ? "OK!": "SUUCK!");
	}
	return (0);
}
