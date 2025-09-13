// the given number is powerof 2.



#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=31;i>=0;--i)
	{
		if((n>>i)&1==1)
			++count;
	}
	if(count==1)
		puts("its a power of 2");
	else
		puts("its not power of 2");

}
