#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i,j,k,r,c;

        printf("Enter row and column for first matrix\n");
        scanf("%d%d",&r,&c);

        int **a=(int**) malloc(r*sizeof(int*));
        for(i=0;i<r;i++)
                a[i]=(int*) malloc(c*sizeof(int));

        int **b=(int**) malloc(r*sizeof(int*));
        for(i=0;i<r;i++)
                b[i]=(int*) malloc(c*sizeof(int));

        int **s=(int**) malloc(r*sizeof(int*));
        for(i=0;i<r;i++)
                s[i]=(int*) malloc(c*sizeof(int));

        printf("Enter elements of 1st matrix\n");
        for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                        scanf("%d",&a[i][j]);

        printf("Enter elements of 2nd matrix\n");
        for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                        scanf("%d",&b[i][j]);

        for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                        s[i][j]=a[i][j]+b[i][j];
                        printf("%d ",s[i][j]);
                }
                printf("\n");
        }
        for (i = 0; i < r; i++) {
                free(a[i]);
                free(b[i]);
                free(s[i]);
        }
        free(a);
        free(b);
        free(s);
}
