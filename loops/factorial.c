// write a program to find factorial.



#include<stdio.h>
int main()
{
	int n,x=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		x=x*n;
		n--;
	}
	printf("%d\n",x);
}
