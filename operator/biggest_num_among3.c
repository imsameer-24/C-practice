#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter te values of x, y & z\n");
	scanf("%d%d%d",&x,&y,&z);
//	if((x==z)&&(y==z)){
//		printf("all are equal\n");}
//	else if((x<y)&&(z<y)){
//		printf("y is biggest\n");}
//	else if((x>y)&&(x>z)){
//		printf("x is biggest\n");}
//	else{
//		printf("z is biggest\n");
//	}
        

	if((x>y)&&(x>z))
		printf("x is biggest\n");
	if((y>x)&&(y>z))
		printf("y is biggest\n");
	if((z>x)&&(z>y))
		printf("z is biggest\n");
	if((x==y)&&(y==z))
		printf("all are equal\n");

}

