#include<stdio.h>
#include<string.h>
char *my_strcpy(char *,char*);
int main()
{
	char s[20],d[20];
	printf("Enter a string\n");
	scanf("%[^\n]",s);
	char *p=my_strcpy(d,s);
	printf("s=%s \nd=%s \n",s,d);
}

char *my_strcpy(char *d,char *s)
{
	int i;
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]='\0';

	return d;
}


