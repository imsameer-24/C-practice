//wap to convert all alphabets of given string into its opposite case.



#include<stdio.h>
int main()
{
	char s[50];
	int i;
	puts("Enter a string");
	gets(s);
	for(i=0;s[i];i++)
		if(((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='a')&&(s[i]<='z')))
			s[i]=s[i]^(1<<5);
	printf("%s\n",s);
}
