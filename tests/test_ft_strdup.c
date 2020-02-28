#include <stdio.h>
#include <string.h>
#include "../ft_strdup.c"
#include "../ft_strcmp.c"
#include "../ft_strlen.c"

int main(void)
{
	char *s[4];
	s[0] = "";
	s[1] = "teSt _! string ";
	s[2] = "after end ! \0 text";
	s[3] = "FUGE TEST!!1!";
	for(int i = 0; i < 4; i++)
	{
		printf("str: %s | ft_strdup: %s | res: %s\n", s[i], ft_strdup(s[i]), strcmp(ft_strdup(s[i]), strdup(s[i])) == 0 ? "OK!" : "SIKE! It`s a wrong answer!");
	}
	return (0);
}
