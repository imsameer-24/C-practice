//basic calculator


#include<stdio.h>
int main()
{
        char op;
        int x,y,z;
        printf("Enter the x,y values\n");
        scanf("%d%d",&x,&y);
        printf("Enter the operator '+','-','*','/','%%'\n");
        scanf(" %c",&op);
        if(op == '+')
        z = x+y;
        else if(op == '-')
        z = x-y;
	else if(op == '*')
        z = x*y;
        else if(op == '/')
        z = x/y;
        else if(op == '%')
        z = x%y;
        else {
        printf("Invalid operator...\n");
        return 0;
        }
        printf("%d %c %d = %d\n",x,op,y,z);
}
