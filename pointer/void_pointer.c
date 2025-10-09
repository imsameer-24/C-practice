#include<stdio.h>
int main()
{
	int x=10;
	void *p;
	p=&x;
	printf("x=%d,*p=%d\n",x,*(int*)p);
	char ch=20;
	p=&ch;
	printf("ch =%d,*p=%d\n",ch,*(char*)p);
}
