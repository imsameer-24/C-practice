//WAP to write the number of times sub-string presented in a main string using function.

#include<stdio.h>
int count(char*,char*);
int main()
{
        char m[20];
        char s[10];
        printf("enter the main string:");
        scanf("%s",m);
        printf("enter the sub string:");
        scanf("%s",s);
        int n = count(m,s);
        printf("count = %d\n",n);
}
int count (char *m,char *s)
{
        int i,j,k,c=0;
        for(i=0;m[i];i++);
        for(j=0;j<i;j++)
        {
                if(m[j]==s[0])
                {
                        for(k=1;s[k];k++)
                                if(s[k]!=m[j+k])
                                        break;

                        if(s[k]=='\0')
                                c++;
                }
        }
        return c;
}

