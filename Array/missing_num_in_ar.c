#include<stdio.h>
int main()
{
	int a[6],i,f,l,sum,a_sum=0;
	printf("Enter elememnts of array\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	f=a[0]-1;
	l=a[5];

	sum=l*(l+1)/2-f*(f+1)/2;

	for(i=0;i<6;i++)
		a_sum+=a[i];
	printf("Missing number is : %d\n",sum-a_sum);
}
