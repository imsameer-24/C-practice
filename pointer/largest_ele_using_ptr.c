#include<stdio.h>
int main()
{
	int i,j,n,a[5];
	printf("Enter 5 elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	int *p=a;
	int max=*p;
	n=sizeof(a)/sizeof(a[0]);

	for(i=1;i<n;i++)
	{
		if(*(p+i)>max)
			max=*(p+i);
	}
	printf("%d ",max);
}

