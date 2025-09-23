// WAP to copy one array ele into another array.



#include<stdio.h>
int main()
{
	int a[5]={};
	int b[5],i;
	printf("enter 5 elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",a+i);
		b[i]=a[i];
	}
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
}

