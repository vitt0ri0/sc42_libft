#include <stdio.h>
#include "../ft_strcpy.c"
#include <string.h>
#include "../ft_strcmp.c"

int main(void)
{
	char s1[6] = "hello";
	char b1[10];
	char b2[10];
	char *p1;
	char *p2;
	p1 = ft_strcpy(b1, s1);
	p2 = strcpy(b2, s1);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n", s1, p1, p2, ft_strcmp(p1, p2) == 0 ? "OK" : "SUUCK!");

	char s11[1] = "";
	char b11[10];
	char b21[10];
	char *p11;
	char *p21;
	p11 = ft_strcpy(b11, s11);
	p21 = strcpy(b21, s11);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n", s11, p11, p21, ft_strcmp(p11, p21) == 0 ? "OK" : "SUUCK!");

	char s111[12] = "hello, MFCK";
	char b111[10];
	char b211[10];
	char *p111;
	char *p211;
	printf("\n intresting test! \n0: distance between pointers before init: %ld\n", p11 - p21);
	p111 = ft_strcpy(b111, s111);
	p211 = strcpy(b211, s111);
	printf("1: distance between pointers after: %ld\n", p11 - p21);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n\n", s111, p111, p211, ft_strcmp(p111, p211) == 0 ? "OK" : "SUUCK! (IT`S OK!11!)");

	char s12[9] = "_d_!@E _";
	char b12[10];
	char b22[10];
	char *p12;
	char *p22;
	p12 = ft_strcpy(b12, s12);
	p22 = strcpy(b22, s12);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n", s12, p12, p22, ft_strcmp(p12, p22) == 0 ? "OK" : "SUUCK!");

	char s122[10] = "123456789";
	char b122[10];
	char b222[10];
	char *p122;
	char *p222;
	p122 = ft_strcpy(b122, s122);
	p222 = strcpy(b222, s122);
	printf("str: %s | ft_cpy: %s | st_cpy: %s| res: %s\n", s122, p122, p222, ft_strcmp(p122, p222) == 0 ? "OK" : "SUUCK!");

return (0);
}
