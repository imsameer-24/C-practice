//wap to merge 2 string characters in 3rd.



#include<stdio.h>
int main()
{
	char s1[20]={};
        char s2[20]={};
	char s3[40]={};
	int i,j,k,sum;
	puts("Enter 1st string");
	gets(s1);
	puts("Enter 2nd string");
	gets(s2);
	for(i=0;s1[i];i++);
	for(j=0;s2[j];j++);
	sum=i+j;
	i=0;
	j=0;
	for(k=0;k<sum;k++)
	{
		if((s1[i]!='\0')&&(s2[j]!='\0'))
		{
			if(k%2==0)
			{
				s3[k]=s1[i];
				i++;
			}
			else
			{
				s3[k]=s2[j];
				j++;
			}
		}
		else if(s1[i]=='\0')
		{
			s3[k]=s2[j];
			j++;
		}
		else
		{
			s3[k]=s1[i];
			i++;
		}
	}
	puts(s3);
}
