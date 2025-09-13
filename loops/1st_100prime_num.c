//1st 100 prime numbers.



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
			printf("%d ",n);
			if(count==100)
				break;
		}
	}
}
