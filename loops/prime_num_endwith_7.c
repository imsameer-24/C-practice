//prime number b/w 1 to 500 ending with 7 only



#include<stdio.h>
int main()
{
	int n,i;
	for(n=2;n<500;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
 	        }
	if(i==n)
	{
		if(n%10==7)
		printf("%d ",n);
	}
	}
}
