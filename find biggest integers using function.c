#include<stdio.h>
#include<conio.h>
int greater(int a,int b,int c);
int main()
{
	int num1,num2,num3,large;
	printf("\n Enter Your First Numbe:-");
	scanf("%d",&num1);
	printf("\n Enter Your Second Number:-");
	scanf("%d",&num2);
	printf("\n Enter Your Third Number:-");
	scanf("%d",&num3);
	large=greater(num1,num2,num3);
	printf("\n Largest Number= %d",large);
	getch();
	return 0;
}
int greater(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	if(b>a && b>c)
		return b;
	else
	{
		return c;
	}
}