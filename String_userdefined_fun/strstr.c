//strstr using another function. 

#include<stdio.h>
char *my_strstr(char *,char *);
int main()
{
	char m[20],s[20];
	printf("Enter main string\n");
	scanf("%s",m);
	printf("Enter sub string\n");
	scanf("%s",s);
	char *p=my_strstr(s,m);
	if(p==NULL)
		puts("sub is not present in the main string\n");
	else
		printf("sub is present in main at %s",p);
}
char *my_strstr(char *q,char *p)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(p[i+j]!=q[j])
					break;
			}
			if(q[j]=='\0')
				return p+i;
			else
				return 0;
		}
	}
}






