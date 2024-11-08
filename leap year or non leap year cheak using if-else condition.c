#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("\n Enter Any Year:-");
	scanf("%d",&year);
	if((year%4==0)&&((year%100!=0) ||(year%400==0)))
	{
		printf("\n Leap Year");
	}
	else
	{
	printf("\n Not Leap Year");	
	}
	getch();
	return 0;
}