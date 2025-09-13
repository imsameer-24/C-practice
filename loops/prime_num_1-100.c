//prime number b/w 1 to 100.



#include<stdio.h>
int main()
{
	int n,i;
	for(n=2;n<100;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
 	        }
	if(i==n)
		printf("%d ",n);
	}
}
