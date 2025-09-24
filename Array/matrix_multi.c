#include<stdio.h>
int main()
{
	int i,j,k,r1,c1,r2,c2;
	printf("Enter row and column for 1st matrix\n");
	scanf("%d%d",&r1,&c1);

	printf("Enter row and column for 2nd matrix\n");
	scanf("%d%d",&r2,&c2);

	int a[r1][c1],b[r2][c2],s[r1][c2];
	printf("Enter 1st matrix elements\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);


	printf("Enter 2nd matrix elements\n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	
	if(r1!=c2){
		perror("r1 != c2");
		return 0;
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			s[i][j]=0;
			for(k=0;k<c1;k++)
			{
				s[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}
