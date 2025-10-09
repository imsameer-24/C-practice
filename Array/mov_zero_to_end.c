#include<stdio.h>
int main()
{
        int a[6],i,j,count=0;
        printf("Enter an array\n");
        for(i=0;i<6;i++)
                scanf("%d",&a[i]);

        for(i=0;i<6;i++)
                if(a[i]==0)
                        count++;

        for(i=0;i<6;i++)
        {
                if(a[i]==0)
                {
                        for(j=i;j<5;j++)
                                a[j]=a[j+1];
                        a[5]=0;
                        count--;
                        if(count==0)
                                break;
                        i--;
                }
        }

        for(i=0;i<6;i++)
                printf("%d ",a[i]);
        printf("\n");

}
