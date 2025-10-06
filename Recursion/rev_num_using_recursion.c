//wap to implement recursive func to reverse the number.


#include<stdio.h>
int rev_num(int,int);
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	int sum = rev_num(num,0);
	printf("%d\n",sum);
}
int rev_num(int n,int sum)
{
	int r;
	if(n!=0)
	{
		r=n%10;
		return rev_num(n/10,sum*10+r);
	}
	else
		return sum;
}
