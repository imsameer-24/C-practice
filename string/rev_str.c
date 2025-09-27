//wap to reverse the given string.


#include<stdio.h>
int main()
{
	char s[20]; 
        int i,j,k;
	char t;

	printf("Enter the string\n");
	scanf("%[^\n]",s);
	
	for(i=0;s[i]!='\0';i++);
	for(j=0,k=i-1;j<k;j++,k--)
	{
		t=s[j];
		s[j]=s[k];
		s[k]=t;
	}
	printf("%s",s);

}
