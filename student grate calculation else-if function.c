#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,total=0;
	float avg=0.0;
	printf("\n Enter Your C Marks:-");
	scanf("%d",&a);
	printf("\n Enter Your Python Marks:-");
	scanf("%d",&b);
	printf("\n Enter Your Data Structures Marks:-");
	scanf("%d",&c);
	printf("\n Enter Your Algorithams Marks:-");
	scanf("%d",&d);
	printf("\n Enter Your CSO Marks:-");
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("\n Total=%d",total);
	avg=(float)total/5;
	printf("\n Average=%f",avg);
	if(avg>=90)
	printf("\n Grade=OO");
	else if(avg>=80&&avg<90)
	printf("\n Grade=AA");
	else if(avg>=70&&avg<80)
	printf("\n Grade=A+");
	else if(avg>=60&&avg<70)
	printf("\n Grade=A");
	else if(avg>=50&&avg<60)
	printf("\n Grade=B+");
	else if(avg>=40&&avg<50)
	printf("\n Grade=B");
	else if(avg>=30&&avg<40)
	printf("\n Grade=C");
	else if(avg>=25&&avg<30)
	printf("\n Grade=D");
	else
	printf("\n Fail The Student");
	return 0;
}