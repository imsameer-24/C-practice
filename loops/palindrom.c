// write a program to check the number is palindrom or not.



#include<stdio.h>
int main()
{
	int n,r,rev=0,temp,sum;
	printf("Enter a number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	/*
        for(sum=0;n!=0;)
        {
                r=n%10;
                sum=sum*10+r;
                n=n/10;
        }
        if(temp==sum)
                printf("its a palindrome number\n");
        else
                printf("its not a palindrome number\n");
	*/
	if(temp==rev)
		printf("It is a palindrome number\n");
	else
		printf("It is not a palindrome number\n");

}
