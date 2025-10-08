#include<stdio.h>
int main()
{
	int a[6],i,j,k;
	printf("Enter an array\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	printf("s\n");

	for(i=0;i<6;i++){
		for(j=i;j<6;j++){
			if(a[j]==0){
				for(k=j;k<5;k++)
					a[k]=a[k+1];
				a[5]=0;
				printf("enter\n");
				j--;
			}
		}
	}
}
			

