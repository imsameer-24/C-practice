#include<stdio.h>
void binary(int, int);
 int main()
 {
         int x;
         printf("Enter a number you want binary:");
         scanf("%d",&x);
         binary(x,31);
 }
void binary(int x,int i)
{
        if(i>=0)
        {
                printf("%d ",(x>>i)&1);
                i--;
                binary(x,i);
        }
        else
        {
                printf("\n");
                return ;
        }
}

