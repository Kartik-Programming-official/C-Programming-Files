#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("\n Enter Your String:-");
	gets(str);
	printf("\n The Number Of Words In A String:=%d",strlen(str));
	getch();
	return 0;
}