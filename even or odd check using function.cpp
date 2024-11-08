#include<stdio.h>
#include<conio.h>

void call(int);

int main()
{
	int a;
	
	printf("\n Enter Your Number:-");
	scanf("%d",&a);
	
	call(a);
	
	getch();

	return 0;	
}

void call(int x)
{
	
	if(x%2==0)
	{
		printf("\n %d Is A Even Number",x);
	}
	else {
		
		printf("\n %d Is A Odd Number",x);
	}
}