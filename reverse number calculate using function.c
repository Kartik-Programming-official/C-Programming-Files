#include<stdio.h>
#include<conio.h>
int rev(int,int);
int main()
{
	int n,reverse=0,remainder;
	printf("\n Enter The Intger:-");
	scanf("%d",&n);
	reverse=rev(n,remainder);
	printf("\n The Reversed Number:-%d",reverse);
	getch();
	return 0;	
}
int rev(int n,int remainder)
{
	int reverse=0;
	while(n!=0) {
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	return reverse;
}