#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b;
	printf("\n Enter Your Celsius value:-");
	scanf("%f",&a);
	b=(a*9/5+32);
	printf("\n Temparature In Fahrenheit=%f",b);
	getch();
	return 0;
}