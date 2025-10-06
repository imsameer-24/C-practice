//factorial implimanting recursive func.


#include<stdio.h>
int factorial(int,int);
int main()
{
	int num;
	printf("Enter a number you want factorial:");
	scanf("%d",&num);
	int sum = factorial(num,1);
	printf("%d\n",sum);
}
int factorial(int n,int sum)
{
	if(n>0)
	{
		return factorial(n-1,sum*n);
	}
	else
		return sum;
}
