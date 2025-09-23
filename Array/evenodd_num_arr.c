// WAP to find the number of even and odd numbers from the given array elements.



#include<stdio.h>
int main()
{
	int a[5];
	int i,count=0;
	printf("Enter 5 elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",a+i);
		if(a[i]%2==0)
			count++;

	}
//	printf("%d ",a[i]);
	printf("%d no of even eles\n",count);
	printf("%d no of odd eles\n",5-count);
}
	

