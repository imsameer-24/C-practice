//chech the given number is perfect number or not



#include<stdio.h>
int main()
{
	int n,i,r,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%i;
		if(r==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("its a perfect number\n");
	else 
		printf("its not a perfect number\n");
}

