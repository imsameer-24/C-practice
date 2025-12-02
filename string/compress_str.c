#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count;
	char ch,s[20];

	printf("Enter a string : ");
	scanf("%s",s);

	for(i=0;i<strlen(s);i++){
		for(j=0;j<i;j++)
			if(s[i]==s[j])
				break;
		if(i!=j)
			continue;
		count=0;
		for(j=i;j<strlen(s);j++)
			if(s[i]==s[j])
				count++;
		printf("%c --> %d\n",s[i],count);
	}
}
