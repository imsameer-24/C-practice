//WAP to print the array elements reverse.


#include<stdio.h>
int main()
{
     int a[5];
     int i;  
     printf("Enter values of array\n");
     for(i=0;i<5;i++)
	     scanf("%d",a+i);
     printf("\n");
     for(i=4;i>=0;i--)
	     printf("%d ",a[i]);
     printf("\n");
}
