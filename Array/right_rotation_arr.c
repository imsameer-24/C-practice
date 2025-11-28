#include<stdio.h>
int main()
{
	int i,j,count=0,n,k;
	int a[]={1,2,3,4,5,6,7};
	printf("Enter a position you want to print from : ");
	scanf("%d",&k);

	n=sizeof(a)/sizeof(a[0]);

	printf("{");
	for(i=n-k;count<n;i++,count++)
	{
		if(k!=n)
			if(i==n)
				i=0;
		printf("%d,",a[i]);
	}
	printf("}\n");
}
