// armstrong number b/w 1 to 100000.


/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,digits=0,sum=0,rem;
	for(n=1;n<=100000;n++)
	{
		num=n;
	while(num!=0)
	{
		digits++;
		num/=10;
	}
	num=n;
	for(;num!=0;)
	{
		rem=num%10;
		sum=sum+pow(rem,digits);
		num=num/10;
	}
	if(sum==n)
		printf("%d  \n",n);
	}
}
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int n, num, digits, sum, rem;
    for(n = 1; n <= 100000; n++)
    {
        num = n;
        digits = 0;
        sum = 0;
        
        while(num != 0)
        {
            digits++;
            num /= 10;
        }
        
        num = n; 
        while(num != 0)
        {
            rem = num % 10;
            sum = sum + pow(rem, digits);
            num = num / 10;
        }
        
        if(sum == n)
            printf("%d\n", n);
    }
}

//cc armstrong_num_1-1000.c -lm
