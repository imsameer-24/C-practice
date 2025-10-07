#include<stdio.h>
int my_strcmp(char *,char *);
int main()
{
	char a[20],b[20];
	int r;
	printf("enter 2 strings\n");
	scanf("%s%s",a,b);
	r=my_strcmp(a,b);
	if(r==0)
		printf("Equal\n");
	else if(r>0)
		printf("a is greater\n");
	else
		printf("b is greater\n");
}

int my_strcmp(char *a,char *b)
{
	for(int i=0;a[i]||b[i];i++)
	{
		if(a[i]>b[i])
			return 1;
		else if(b[i]>a[i])
			return -1;
	}
	return 0;
}

