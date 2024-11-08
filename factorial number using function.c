#include<stdio.h>
#include<conio.h>

int factorial(int,int);

int main()
{
	int i,n,fact=1;
	
	printf("\n Enter Your Numbe:-");
	scanf("%d",&n);
	
	fact=factorial(i,n);
	printf("\n The Factorial Of %d= %d",n,fact);
	
	getch();
	
	return 0;
}
int factorial(int i,int n)
{
	int fact=1;
	for(i=n;i>=2;i--)
	{
		fact=fact*i;
	}
	
	return fact;
	
}