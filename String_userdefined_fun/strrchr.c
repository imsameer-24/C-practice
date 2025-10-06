//wap to implement strrchr in userdefined fun.


#include<stdio.h>
#include<string.h>
char *my_strchr(char *,char);
int main()
{
	char s[20],ch;
	printf("Enter a string\n");
	scanf("%s",s);
	printf("Enter a character\n");
	scanf(" %c",&ch);
	char *p=my_strchr(s,ch);
	printf("%s\n",s);
	printf("%s\n",p);
}
char *my_strchr(char *s,char ch)
{
	int i,l;
	l=strlen(s);
	for(i=l;i!=0;i--)
		if(s[i]==ch)
			break;
	return s+i;
}


