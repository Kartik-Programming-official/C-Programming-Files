#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\n Enter Any Character:-");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z') 
	{
		printf("\n The Enter Character Was In upper case.\n In Lower case It Is:- %c\n",(ch+32));
	}
	else
	{
		printf("\n Thr Enter Character was In Lower Case.\n In upper Case It Is:- %c\n",(ch-32));
	}
	getch();
	return 0;
}