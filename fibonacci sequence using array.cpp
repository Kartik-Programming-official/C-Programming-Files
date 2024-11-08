#include<stdio.h>
#include<conio.h>
int main()
{
	int fibo[10],i;
	fibo[0]=0;
	fibo[1]=1;
	for(i=2;i<=9;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(i=0;i<=9;i++)
	{
		printf("%d,",fibo[i]);
	}
	getch();
	return 0;
}