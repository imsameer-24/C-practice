#include<stdio.h>
#include<string.h>
void removeNonAlphabets(char *str) {
	int i, j = 0;
	for (i = 0; str[i]; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			str[j++] = str[i];
		}
	}
	str[j] = '\0'; // Null terminate the cleaned string
}

void uppercase(char *str1){
	int m;
	for(m=0;str1[m];m++){
		if((str1[m] >= 'a') && (str1[m] <= 'z'))
			str1[m] = str1[m]^32;

	}

}
void sortstring(char *str2){
	int i,j;
	char temp;
	for (i = 0; str2[i]; i++) {           // Traverse the string with i
		for (j = i + 1; str2[j]; j++) {   // Traverse the string with j starting from i+1
			if (str2[i] > str2[j]) {       // Compare characters at i and j
				temp = str2[i];           // Swap if str[i] is greater than str[j]
				str2[i] = str2[j];
				str2[j] = temp;
			}
		}
	}
}

int main() {
	char a[20];
	char s[20];
	int m,x;

	printf("enter string a\n");
	scanf("%s",a);
	printf("enter string s\n");
	scanf("%s",s);


	removeNonAlphabets(a);
	//printf("%s\n", a);

	removeNonAlphabets(s);
	//printf("%s\n", s);

	if(strlen(a) != strlen(s))
		printf("It's not an anagram");


	uppercase(a);
	uppercase(s);

	//printf("%s\n",a);
	//printf("%s",s);

	sortstring(a);
	sortstring(s);

	printf("%s\n",a);
	printf("%s\n",s);

	x = strcmp(a,s);
	if(x==0)
		printf("it is an anagram\n");
	else
		printf("it is not an anagram\n");

	return 0;
}

