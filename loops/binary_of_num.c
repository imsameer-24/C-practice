//write a program to write the binary formation of a given number.



#include<stdio.h>
int main()
{
	int num,i;
        printf("Enter a number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
}
