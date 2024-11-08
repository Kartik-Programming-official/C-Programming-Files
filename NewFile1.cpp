#include<stdio.h>
#include<conio.h>
char call(char);
int main()
{
   char str[10],country;
	printf("\n Enter Your Country:-");
	gets(str);
	country=call(str[10]);
	printf("\n %s",country);
	getch();
	return 0;
}
char call(char str[10])
{
char country;
country=str[10];
switch(str[10])
{
	case 'india':
		printf("\n Namaste");
		break;
		case 'west':
			printf("\n Hellow");
			break;
			default:
				printf("\n Plase valid choos");
}
	return country;
}