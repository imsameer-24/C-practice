//write a program to print only even digits in the given number.

#include<stdio.h>
int main()
{
	int cnt =0,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		cnt++;
	}
	printf("No of digits of the no is %d\n",cnt);
}
