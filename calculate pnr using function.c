#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n,r;
	float result;
	printf("\n Enter The Value Of N:-");
	scanf("%d",&n);
	printf("\n Enter The Value Of R:-");
	scanf("%d",&r);
	result=(float)fact(n)/fact(r);
	printf("\n p(n/r):- p(%d)/(%d)= %f",n,r,result);
	getch();
	return 0;
}
int fact(int num)
{
	int f=1,i;
	for(i=num;i>=1;i--)
		f=f*i;
		return f;
}