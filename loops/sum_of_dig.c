// write a program to perform sum of digits of a given number.



#include<stdio.h>
int main()
{
	int sum,n,r,r1=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n!=0){
	
		r=(n%10);
                r1+=r;
		n=n/10;
	}
	/*
	for(sum=0;n!=0;)
        {
                r=n%10;
                sum=sum+r;
                n=n/10;
        }
	*/
	printf("%d\n",r1);
}

	        
