#include<stdio.h>
void main()
{
	int num,rem;
	printf("\n Enter any number:-");
	scanf("%d",&num);
	rem=num%2;
	switch(rem)
	{
		case 0:
			printf("\n Even number");
			break;
			case 1:
				printf("\n Odd number");
				break;
				
	}
}