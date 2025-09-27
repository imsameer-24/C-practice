//wap to copy a string to source array to destination array.



#include<stdio.h>
int main()
{
	char s[20],d[20];
	int i;
	puts("Enter source string");
	gets(s);
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]=s[i];//d[i]=\0;
	puts(d);
}

