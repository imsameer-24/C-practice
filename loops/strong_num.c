// strong number



#include<stdio.h>
int main()
{
	int n,r,res=1,sum=0,num;
	for(n=1;n<=100000;n++)
	{

		num=n;
		sum=0;

		for(;num!=0;num/=10)
		{
			r=num%10;
			for(res=1;r!=0;r--)
				res=res*r;
			sum=sum+res;
		}
		if(sum==n)
			printf("%d\n",sum);
	
	}

}
