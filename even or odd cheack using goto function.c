#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("\n ENTER ANY NUMBER:-");
	scanf("%d",&a);
	if(a%2==0){
		goto even;
			}
			else {
				goto odd;
			}
			even:{
				printf("%d is a Even Number",a);
				return;
			}
			odd:{
				printf("%d is a Odd Number",a);
				return;
			}
			return 0;
}