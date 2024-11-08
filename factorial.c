#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,fact=1;
	printf("\n Enter The Value:-");
	scanf("%d",&n);
	for(i=n;i>=2;i--)
	{
		fact=fact*i;
		printf("\n Factorial Number Of The %d is = %d",n,fact);
	}
	getch();
	return 0;
}