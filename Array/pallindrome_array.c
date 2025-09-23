// WAP to check the given array is in palindrome.


#include<stdio.h>
int main()
{
	int i,j,n;
	int a[]={10,20,30,40,30,20,10};
	n= sizeof a/sizeof a[0];
	for(i=0;i>n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(a[i]!=a[j])
			break;
	}
	if(i<j)
		printf("its not pallindrome\n");
	else
		printf("its pallindrome\n");

}
