#include<stdio.h>
int main()
{
	int r,c,i,j;

        printf("Enter row and column\n");
        scanf("%d%d",&r,&c);
        int a[r][c],b[r][c],s[r][c];

        printf("Enter elements of 1st matrix\n");
        for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                        scanf("%d",&a[i][j]);

        printf("Enter elements of 2nd matrix\n");
        for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                        scanf("%d",&b[i][j]);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]-b[i][j];
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	
}
