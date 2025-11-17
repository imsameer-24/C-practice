#include<stdio.h>
int main()
{
	int i,a[5];
	int temp;
	printf("Enter elements for array\n");
	
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int *start=a;
	int *end=a+n-1;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	
}


