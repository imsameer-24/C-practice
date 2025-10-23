//wap to implement strncpy in userdefined fun.


#include<stdio.h>
char *my_strncpy(char* ,char*,int);
int main(){
        char s[20],d[20];
        int n;
        printf("Enter src string : ");
        scanf("%s",s);
        printf("Enter the position upto when you wnat to copy : ");
        scanf("%d",&n);
        char *p= my_strncpy(s,d,n);
        printf("s=%s\n",s);
        printf("d=%s\n",d);
        printf("p=%s\n",p);
}
char *my_strncpy(char *p, char *q,int c)
{
        int i;
        for(i=0;i<c;i++)
                q[i]=p[i];
        q[i]='\0';
        return q;
}

