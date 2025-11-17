//write a program to design a menu for bitwise operator.



#include<stdio.h>
void binary(int);
int main()
{
	int num,i,pos;
	char op;
	printf("Enter a number\n");
	scanf("%d",&num);
	binary(num);
	printf("Enter a position\n");
	scanf("%d",&pos);
	printf("Enter a operation u want s)set c)clear t)triger\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 's': num=num|(1<<pos);
			  break;
		case 'c': num=num&~(1<<pos);
			  break;
		case 't': num=num^(1<<pos);
			  break;
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
