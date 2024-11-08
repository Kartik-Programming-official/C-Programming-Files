#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int decimal_num,remainder,binary_num,i=0;
	printf("\n Enter The Decimal Number:-");
	scanf("%d",&decimal_num);
	while(decimal_num!=0)
	{
		remainder=decimal_num%2;
		binary_num += remainder*pow(10,i);
		decimal_num=decimal_num/2;
		i++;
	}
	printf("\n The Binary Equivalent=%d",binary_num);
	getch();
	return 0;
}