//wap to set a char in a given string that how many number of time it is present , using fun.


#include<stdio.h>
#include<string.h>
int fun(char *,char);
int main()
{
	char ch;
	char s[20];
	printf("Enter a string\n");
	scanf("%[^\n]",s);
	printf("Enter a character\n");
	scanf(" %c",&ch);
	int r = fun(s,ch);
	printf("%d times present\n",r);
}
int fun(char *s,char n)
{
	int i,count=0;
	for(i=0;s[i];i++)
		if(s[i]==n)
			count++;
	return count;
}
