#include<stdio.h>
#include<string.h>
char *my_strcat(char* ,char *);
int main()
{
	char s[20],a[10],*p;
	printf("Enter 2 strings : ");
	scanf("%s%s",s,a);
	p=my_strcat(s,a);
	printf("s=%s\na=%s\np=%s\n",s,a,p);

}


char *my_strcat(char *s,char *a)
{
	int j=0,i;
	i=strlen(s);
	for(;a[j];i++,j++)
		s[i]=a[j];
	s[i]='\0';
	return s;
}
