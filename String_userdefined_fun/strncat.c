//wap to impliment userdefined strncat fun.


#include<stdio.h>
#include<string.h>
char *my_strncat(char *,char *,int);
int main()
{
	char s[20],d[20];
	int n;
	printf("Enter the source string\n");
	scanf("%s",s);
	printf("Enter the destination string\n");
	scanf("%s",d);
	printf("Enter the posion upto where you want to attatch the 2nd string : ");
	scanf("%d",&n);
	char *p=my_strncat(d,s,n);
	printf("s=%s\n",s);
	printf("d=%s\n",d);
	printf("p=%s\n",p);
}
char *my_strncat(char *q,char *p,int n)
{
	int j,i;
	for(j=0;q[j];j++);
	for(i=0;i<n;i++,j++)
		q[j]=p[i];
	q[j]='\0';
	return q;
}

