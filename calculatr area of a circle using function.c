#include<stdio.h>
#include<conio.h>
float call_area(float r);
int main()
{
	float area,radius;
	printf("\n Enter The Radius Of The circle:-");
	scanf("%f",&radius);
	area=call_area(radius);
	printf("\n Area Of The Circle with Radius %f = %f",radius,area);
	getch();
	return 0;
}
float call_area(float radius)
{
	return (3.14 * radius*radius);
}