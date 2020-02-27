#include <stdio.h>
#include "../ft_strcmp.c"
#include <string.h>

int main()
{
	char *str1[10];
	char *str2[10];
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
	str2[0] = "";
	str2[1] = " ";
	str2[2] = "e";
	str2[3] = "est";
	str2[4] = " ";
	str2[5] = "an";
	str2[6] = "kek lol";
	str2[7] = "o f";
	str2[8] = "_ _ ";
	str2[9] = "";

	for(int i = 0; i < 10; i++)
	{
		printf("s1: %s | s2: %s | res: %d | answer: %s\n", str1[i], str2[i], ft_strcmp(str1[i], str2[i]), ft_strcmp(str1[i], str2[i]) == strcmp(str1[i], str2[i]) ? "OK" : "SUCK!");
	}
	return (0);
}
