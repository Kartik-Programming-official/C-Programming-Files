#include<stdio.h>
#include<conio.h>

void swap_value(int a,int b,int c,int d);

int main()
{
	int a,b,c,d;
	
	printf("\n Enter Your Value Of A=");
	scanf("%d",&a);
	
	printf("\n Enter Your Value Of B=");
	scanf("%d",&b);
	
	printf("\n Enter Your Value Of C:-");
	scanf("%d",&c);
	
	printf("\n Enter Your Value Of D:-");
	scanf("%d",&d);
	
	swap_value(a,b,c,d);
	
	getch();
	
	return 0;
	
}

void swap_value(int x,int y,int z,int z1)
{
	x=x+z1;
	z1=x-z1;
	x=x-z1;
	
	printf("\n After Swaping Value:-");
	printf("\n A=%d And D=%d",x,z1);
	
	y=y+z;
	z=y-z;
	y=y-z;
	
	printf("\n B=%d And C=%d",y,z);
}