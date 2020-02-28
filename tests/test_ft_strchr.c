#include "../ft_strchr.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s[10];
	char *sym = "atTTus\n-5!";
	s[0] = ""; //a
	s[1] = "tesTt"; //t
	s[2] = "tesTt";	//T
	s[3] = "tesTt"; //T
	s[4] = "tes \0 Ttu"; //u
	s[5] = "tweezer"; //s
	s[6] = "te_ \n\b"; //\n
	s[7] = "is val--i"; //-
	s[8] = "te8s-T5t"; //5
	s[9] = "tes!Tt"; //!

	for(int i = 0; i < 10; i++)
	{
		printf("str: %s | find: %c | ft_strchr: %c | res: %s\n", s[i], sym[i], ft_strchr(s[i], sym[i]) ? ft_strchr(s[i], sym[i])[0] : 32, ft_strchr(s[i], sym[i]) == strchr(s[i], sym[i]) ? "OK!" : "SUUCK!1!");
	}
	return (0);
}
