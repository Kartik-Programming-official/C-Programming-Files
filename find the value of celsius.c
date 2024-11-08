#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b;
	printf("\n Enter Your Farenheit Value:-");
	scanf("%f",&a);
b=((a-32)*5/9);
printf("\n Temperature In Celsius=%f",b);
getch();
return 0;	
}