#include<stdio.h>
#include<conio.h>
int add(int , int);


int main()
{
	int a,b,c;
	printf("\n Enter Your First Number:-");
	
	scanf("%d",&a);
	
	printf("\n Enter Your Second Number:-");
	
	scanf("%d",&b);
	
	c=add(a,b);
	
	printf("\n The Sum Of Thr Number= %d",c);
	
	getch();
	
	return 0;
	
}
int add(int x,int y)

{
	int z;
	
	z=x+y;
	
	return z;
}