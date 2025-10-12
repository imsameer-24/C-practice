#include<stdio.h>
int main()
{
	int i,j,count;
	char s[20];
	printf("Enter a string : ");
	scanf("%s",s);

	for(i=0;s[i];i++){
		count=0;
		for(j=0;s[j];j++)
			if(s[i]==s[j])
				count++;
		if(count==1){
			printf("%c \n",s[i]);
			break;
		}
	}
}


			


