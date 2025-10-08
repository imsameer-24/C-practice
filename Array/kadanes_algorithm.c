#include<stdio.h>
int main()
{
	int a[8],i,j,c=0,largest_sum=0;
	printf("Enter an array\n");
	for(i=0;i<8;i++)
		scanf("%d",&a[i]);
	for(i=0;i<8;i++){
		c=0;
		for(j=i;j<8;j++){
			c+=a[j];
			if(c>largest_sum)
				largest_sum=c;
		}
	}
	printf("Largest sum = %d\n",largest_sum);
}



