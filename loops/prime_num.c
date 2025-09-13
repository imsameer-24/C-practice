// prime number


#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sq;
	printf("Enter a number\n");
	scanf("%d",&n);
	sq=sqrt(n);
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
			break;
	}
		if(i==sq+1)
			printf("Its a prime number\n");
		else
			printf("its not a prime number\n");
	

}

//cc prime_num.c -lm
