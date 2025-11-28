#include<stdio.h>
int main()
{
	int i,j,k,a[7];
	int count=0;

	printf("Enter 7 elements in array\n");
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	printf("Enter a position from you want to read : ");
	scanf("%d",&k);

	int n=sizeof(a)/sizeof(a[0]);

	if(k>1)
		for(i=k-1;count<n;i++,count++)
		{
			if(i==n)
				i=0;
			printf("%d ",a[i]);
		}
}

