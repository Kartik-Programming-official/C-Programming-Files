#include<stdio.h>
#include<conio.h>
int main()
{
	int day;
	printf("\n Enter number for 1 to 7:-");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("\n sunday");
			break;
				case 2:
			printf("\n Monday");
			break;
				case 3:
			printf("\n Tuesday");
			break;
				case 4:
			printf("\n Wednesday");
			break;
				case 5:
			printf("\n Thursday");
			break;
				case 6:
			printf("\n Friday");
			break;
				case 7:
			printf("\n Saturday");
			break;
			default:
				printf("\n Wrong number");
	}
	return 0;
}