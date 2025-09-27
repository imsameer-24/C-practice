// WAP to check if the string is palindrome.



#include<stdio.h>
int main()
{
	int i,j;
	char s[20];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++);
	for(i=i-1,j=0;i>j;i--,j++)
	{
		if(s[j]!=s[i])
			break;
	}
	if(j<i)
		printf("it's not a palindrome\n");
	else
		printf("it's palindrome\n");
}

