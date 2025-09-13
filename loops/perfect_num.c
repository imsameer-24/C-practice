//chech the given number is perfect number or not



#include<stdio.h>
int main()
{
	int n,x,r,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(x=1;x<n;x++)
	{
		r=n%x;
		if(r==0)
			sum=sum+x;
	}
	if(sum==n)
		printf("its a perfect number\n");
	else 
		printf("its not a perfect number\n");
}

