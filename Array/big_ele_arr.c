// WAP to find the biggest element on an array.



#include<stdio.h>
int main()
{
	int a[] = {10,21,54,97,56,67,83,39,49,76,1};
	int n,i,b,j;
	n= sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	b=a[0];
	for(i=1;i<n;i++)
		if(b<a[i])
			b=a[i];
	printf(" %d is the biggest element\n",b);
}

