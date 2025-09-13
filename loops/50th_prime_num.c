//to print 50th prime number



#include<stdio.h>
int main()
{
	int n,i,count=0;
	for(n=2;;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
		{
			count++;
			if(count==50)
			{
				printf("%d\n",n);
				break;
			}
		}
	}
}
