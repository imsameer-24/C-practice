//fibonacci series implementing recursive func.


#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
	int num;
	printf("Enter a number till you want fibonacci numbers\n");
	scanf("%d",&num);
	fibonacci(num,0,1);
	printf("\n");
}
void fibonacci(int n,int x1,int x2)
{
	//int temp;
	if(x1<=n)
	{
		printf("%d ",x1);
		fibonacci(n,x2,x2+x1);
	}
}
