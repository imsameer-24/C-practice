//wap to count the number of digits,alphabets and special characters in a given string.


#include<stdio.h>
int main()
{
	char s[50];
	int a=0,d=0,sc=0,i,j;
	puts("Enter a string");
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		if(((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='a')&&(s[i]<='z')))
			a++;
		else if((s[i]>='0')&&(s[i]<='9'))
			d++;
		else
			sc++;
	}
	printf("Alphabets = %d\n",a);
	printf("Digits = %d\n",d);
	printf("Special characters = %d\n",sc);
}

