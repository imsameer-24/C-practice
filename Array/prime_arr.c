//WAP to find the no. of prime numbers in the given number 


#include<stdio.h>
#include<math.h>
int main()
{
	int a[] = {10,11,18,17,21,23,45,57,67};
	int n,i,j,sq,count=0;
	n = sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
	{
		sq=sqrt(a[i]);
		for(j=2;j<=sq;j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(j==sq+1)
		{
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("%d prime numbers in this array\n",count);
	
}
