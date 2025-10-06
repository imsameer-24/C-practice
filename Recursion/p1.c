#include<stdio.h>
void fun(char *p);
int main()
{
	fun("abcde");
	printf("\n");
}
void fun(char *p)
{
	if(*p)
	{
		printf("%c ",*p);
		fun(p+1);
	}
/*	if(*p)
	{
		fun(p+1);
		printf("%c ",*p);
	}*/
/*	if(*p)
	{
		fun(p++);
		printf("%c ",*p);
	}*/
/*	if(*p)
	{
		fun(++p);
		printf("%c ",*p);
	}*/
}
