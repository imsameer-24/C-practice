// armstrong number



#include<stdio.h>
#include<math.h>
int main()
/*{
	int n,i=0,res1,res,cnt=0,r,r1,temp,temp1;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
	temp1=n;
	while(n!=0)
	{
		r1=n%10;
		cnt++;
		n=n/10;
	}
	for(res=0;temp!=0;)
	{
		r=temp%10;
		for(res1=1;i<cnt;i++)
			res1=res1*r;
		res=res+res1;
		i=0;
		temp=temp/10;
	}
	if(res==temp1)
		printf("its an armstrong number\n");
	else
		printf("its note an armstrong number\n");
}*/


{
	int n,num,digits=0,sum=0,rem;
	printf("Enter a number\n");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		digits++;
		num/=10;
	}
	num=n;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,digits);
		num=num/10;
	}
	if(n==sum)
		puts("armstrong number");
	else
		puts("not armstrong numnber");
	return 0;
}

//cc armstrong_num.c -lm
