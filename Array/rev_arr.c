//WAP reverse the array elements in a given array .


#include<stdio.h>
int main()
{
     int a[5]={10,20,30,40,50};
     int i,j,temp;  
     for(i=0;i<5;i++)
	     printf("%d ",a[i]);
     for(i=0,j=4;j>i;i++,j--)
     {
	     temp = a[i];
	     a[i] = a[j];
	     a[j] = temp;
     }
     printf("\n");
     for(j=0;j<5;j++)
	     printf("%d ",a[j]);
     printf("\n");
}
