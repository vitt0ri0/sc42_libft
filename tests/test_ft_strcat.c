#include <stdio.h>
#include "../ft_strcat.c"
#include <string.h>
#include "../ft_strcmp.c"

int main(void)
{
	char *s1 = "hello";
	char *p1;
	char b1[25] = "wtf_a ";
	char b2[25] = "wtf_a ";
	char *p2;
	p1 = ft_strcat(b1, s1);
	p2 = strcat(b2, s1);
	printf("str: %s | ft_cat: %s | st_cat: %s| res: %s\n", s1, p1, p2, ft_strcmp(p1, p2) == 0 ? "OK" : "SUUCK!");
/*
	char *s11 = "";
	char b11[10];
	char b21[10];
	char *p11;
	char *p21;
	p11 = strcpy(b11, s11);
	p21 = strcpy(b21, s11);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n", s11, p11, p21, ft_strcmp(p11, p21) == 0 ? "OK" : "SUUCK!");

	char *s111 = "hello, MFCK";
	char b111[10];
	char b211[10];
	char *p111;
	char *p211;
	printf("\n intresting test! \n0: distance between pointers before init: %ld\n", p11 - p21);
	p111 = strcpy(b111, s111);
	p211 = strcpy(b211, s111);
	printf("1: distance between pointers after: %ld\n", p11 - p21);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n\n", s111, p111, p211, ft_strcmp(p111, p211) == 0 ? "OK" : "SUUCK! (IT`S OK!11!)");
*/
return (0);
}
