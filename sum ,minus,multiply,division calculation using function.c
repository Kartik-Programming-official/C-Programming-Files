#include<stdio.h>
#include<conio.h>

int sum(int,int);

int min(int,int);

int mul(int,int);

int div(int ,int);

int main()
{
	int a,b,c,d,e;
	float f;
	
	printf("\n Plase Enter Your First Number:-");
	scanf("%d",&a);
	
	printf("\n Plase Enter The Second Number:-");
	scanf("%d",&b);
	
	c=sum(a,b);
	printf("\n The Sum Of The %d and %d = %d",a,b,c);
	
	d=min(a,b);
	printf("\n The Minuse of The %d and %d = %d",a,b,d);
	
	e=mul(a,b);
	printf("\n The Multiplier Of The %d and %d = %d",a,b,e);
	
    f=div(a,b);	
    printf("\n The Division Of %d and %d = %lf",a,b,f);
	
	getch();
	
	return 0;
		
}

int sum(int x, int y)
{
	int z;
	
	z=x+y;
	return z;
}

int min(int x1, int y1)
{
	int z1;
	
	z1=x1-y1;
	return z1;
}

int mul(int x2,int y2)
{
	int z2;
	
	z2=x2*y2;
	return z2;
}

int div(int x3, int y3)
{
	int z3;
	
	z3=x3/y3;
	return z3;
}