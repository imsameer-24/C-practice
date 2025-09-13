//write a program to print only even digits in the given number.


#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter a number \n");
	scanf("%d",&n);
	while(n!=0)
	{
	        r=(n%10);
	       if((r%2)==0)
	       printf("%d\n",r);	       
		n=n/10;
	}
}


