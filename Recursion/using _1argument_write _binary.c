#include<stdio.h>
void binary(int);
 int main()
 {
         int x;
         printf("Enter a number you want binary:");
         scanf("%d",&x);
         binary(x);
 }
void binary(int x)
{
	static int i=31;
        if(i>=0)
        {
                printf("%d ",(x>>i)&1);
                i--;
                binary(x);
        }
        else
        {
                printf("\n");
                return ;
        }
}

