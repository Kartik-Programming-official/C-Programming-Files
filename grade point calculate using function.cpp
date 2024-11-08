#include<stdio.h>
#include<conio.h>

void marks(int,int,int,int,int);

int main()
{
	
	int a,b,c,d,e;
	
	printf("\n Enter Your C Programing Mrkes:-");
	scanf("%d",&a);
	
	printf("\n Enter Your Python Mrkes:-");
	scanf("%d",&b);
	
	printf("\n Enter Your Data Structure Mrkes:-");
	scanf("%d",&c);
	
	printf("\n Enter Your Algorithams Mrkes:-");
	scanf("%d",&d);
	
	printf("\n Enter Your CSO Mrkes:-");
	scanf("%d",&e);
	
	marks(a,b,c,d,e);
	
	getch();
	
	return 0;
}

void marks(int x,int y,int x2,int y2,int z)
{
	int total=0;
	
	float avg=0.0;
	
	total=x+y+x2+y2+z;
	printf("\n Your Total Markes = %d",total);
	
	avg=total/5;
	printf("\n Your Average Markes = %f",avg);
	
	if(avg>=90)
		printf("\n Grade Point = OO");
	
	else if(avg>=95)
		printf("\n Grade Point = AA");
	
		else if(avg>=90)
		printf("\n Grade Point = A+");
	
		else if(avg>=80)
		printf("\n Grade Point = A");
	
		else if(avg>=75)
		printf("\n Grade Point = B+");
	
		else if(avg>=70)
		printf("\n Grade Point = B");
	
		else if(avg>=60)
		printf("\n Grade Point = C+");
	
		else if(avg>=50)
		printf("\n Grade Point = C");
	
		else if(avg>=40)
		printf("\n Grade Point = D+");
	
		else if(avg>=25)
		printf("\n Grade Point = D");
	
	else
		printf("\n OPPS Fail The Student");
	
}