#include<stdio.h>
int main()
{
	int i,j,k,n,m,a[5],b[5];

	printf("Enter 1st array elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	printf("Enter 2nd array elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);

	n=sizeof(a)/sizeof(a[0]);
	m=sizeof(b)/sizeof(b[0]);

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i]==b[j]){
				printf("%d ",a[i]);
				break;
			}
}
