#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n;
	printf("\n Enter Your Lower year to check leap year or Not:-");
	scanf("%d",&m);
	printf("\n Enter your upper year to check leap year or not:-");
	scanf("%d",&n);
	do 
	{
		if(m%4==0)
		printf("\n %d is a leap year",m);
		else
		printf("\n %d is Not a leap year",m);
		m=m+1;
	}
	while(m<=n);
	getch();
	return 0;
}