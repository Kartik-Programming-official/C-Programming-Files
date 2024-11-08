#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	float sal,bonus,amt_to_be_paid;
	printf("\n Enter The Sex Of The Employes (M or F):-");
	scanf("%c",&ch);
	printf("\n Enter The Salary Of The Employee:-");
	scanf("%f",&sal);
	if(ch=='m'||ch=='M')
	bonus=0.05*sal;
	else
	bonus=0.10*sal;
	if(sal<=10000)
	bonus += 0.20*sal;
	amt_to_be_paid=sal+bonus;
	printf("\n Salary=%f",sal);
	printf("\n Bonus=%f",bonus);
	printf("\n ********************************************");
	printf("\n Amount To Be paid:-%f",amt_to_be_paid);
	getch();
	return 0;
}