//WAP to find the second biggest element in an array.



#include<stdio.h>
int main()
{
	int a[]={100,26,30,95,23,84,75,95,54,67,72};
	int n,i,b1,b2=0;
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	b1=a[0];
	for(i=0;i<n;i++)
	{
		if(b1<a[i])
		{
			b2=b1;
			b1=a[i];
		}
		else if((a[i]>b2)&&(a[i]!=b1))
			b2=a[i];
	}
	printf("%d is the 2nd biggest\n",b2);
}


