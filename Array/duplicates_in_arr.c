#include<stdio.h>
int main()
{
	int i,j,k,n,count,a[5];
	printf("Enter 5 array elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	n=sizeof(a)/sizeof(a[0]);

	for(i=0;i<n;i++)
	{
		count=0;
		for(k=0;k<i;k++){
			if(a[i]==a[k])
				count++;
		}
		if(count==1)
			printf("%d ",a[i]);
	
	}
}
			
