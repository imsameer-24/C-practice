//write a program to check the perticular bit is set or clear in a given number using right shift.


#include<stdio.h>
int main()
{
	int num,pos;
	printf("Enter a number and position\n");
    	scanf("%d%d",&num,&pos);
	num>>pos&1 ? puts("set") : puts("clear");
}
