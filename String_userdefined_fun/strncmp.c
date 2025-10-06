#include<stdio.h>
#include<string.h>
int *my_strncmp(char*,char*,int);
int main()
{
	char s1[20],s2[20];
	int n;
	printf("Enter the strings\n");
	scanf("%s%s",s1,s2);
	printf("Enter the n value\n");
	scanf("%d",&n);
	int *r = my_strncmp(s1,s2,n);
	if(r == 0)
		printf("strings are equal\n");
	else if(r > 0)
		printf("s1 is greater, s2 is smaller\n");
	else
		printf("s1 is smaller, s2 is greater\n");
}
int *my_stnrcmp(char* s1,char* s2,int n)
{
	int i;
	for(i=0;(i<n)&&(s1[i]&&s2[i]);i++)
	{
		if(s1[i]!=s2[i])
			break;
	}
	int m=(s1[i]-s2[i]);
	if(i==n)
		return 0;
	else
		return m;
}

