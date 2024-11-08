#include<stdio.h>
#include<conio.h>
int sub(int,int);
void main()
{
	int a,b,c;
	printf("\n Enter Your First Number:-");
	scanf("%d",&a);
	printf("\n Enter Your Second Number:-");
	scanf("%d",&b);
	c=sub(a,b);
	printf("\n The Subtraction Of The Number= %d",c);
	getch();
}
int sub(int x,int y)
{
	int z;
	z=x-y;
	return z;
}