//write a program to find the power of given number.



#include<stdio.h>
int main()
{
	int x,y,res,i=0;
	printf("Enter values of x and y\n");
	scanf("%d%d",&x,&y);
	for(res=1;i<y;i++)
		res=res*x;
	printf("%d^%d=%d\n",x,y,res);
}
