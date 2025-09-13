// write a program to print fibonacci series.



#include<stdio.h>
int main()
{
	int n,x=0,x1=1,temp;
        printf("Enter a number\n");
        scanf("%d",&n);
        while(x<=n)
	{
		printf("%d  ",x);
		temp=x;
	        x=x1;
		x1=temp+x1;
		
	}
	/*
	 for(x=0,x1=1;x<=n;)
        {
                printf("%d  ",x);
                temp=x;
                x=x1;
                x1=x1+temp;
        }
	*/
}
