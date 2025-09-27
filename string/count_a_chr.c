//wap to find that a particular character count in a given string.


#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],ch;
	int i,j,count=0;
	puts("Enter a string..");
	gets(s);
	puts("Enter the character");
	scanf("%c",&ch);
	for(i=0;s[i];i++);
	for(j=0;j<i;j++)
		if(s[j]==ch)
			count++;
	printf("count=%d\n",count);

}
