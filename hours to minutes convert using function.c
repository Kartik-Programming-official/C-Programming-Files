#include<stdio.h>
#include<conio.h>
int convert_time_in_mins(int hrs,int minutes);
int main()
{
	int hrs,minutes,total_minutes;
	printf("\n Enter Hours:-");
	scanf("%d",&hrs);
	printf("\n Enter Minutes:-");
	scanf("%d",&minutes);
	total_minutes=convert_time_in_mins(hrs,minutes);
	printf("\n Total Minutes= %d",total_minutes);
	getch();
	return 0;
}
int convert_time_in_mins(int hrs,int minutes)
{
	int mins;
	mins=hrs*60+minutes;
	return mins;
}