//swap two perticular position bits of a given number


#include<stdio.h>
void binary(int num);
int main()
{
	int num,i,pos1,pos2,b1,b2;
	printf("Enter a number\n");
	scanf("%d",&num);
	binary(num);
	printf("Enter positions u want to swap\n");
	scanf("%d%d",&pos1,&pos2);
	b1=num>>pos1&1;
	b2=num>>pos2&1;
	if(b1!=b2)
	{
		num=num^(1<<pos1);
		num=num^(1<<pos2);
	}
	binary(num);
}
void binary(int num)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
}
