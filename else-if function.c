#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,total=0;
	float avg=0.0;
	printf("\n Enter your C marks:-");
	scanf("%d",&a);
	printf("\n Enter your Phython marks:-");
	scanf("%d",&b);
	printf("\n Enter your Data Structures marks:-");
	scanf("%d",&c);
	printf("\n Enter your Algorithms marks:-");
	scanf("%d",&d);
	printf("\n Enter your Cso marks:-");
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("\n Total marks=%d",total);
	avg=(float)total/5;
	printf("\n Average=%f",avg);
	if(avg>=90)
	printf("\n Grade=OO");
	else if(avg>=80&&avg<90)
	printf("\n Grade=AA");
		else if(avg>=70&&avg<80)
	printf("\n Grade=A+");
		else if(avg>=60&&avg<70)
	printf("\n Grade=A");
		else if(avg>=50&&avg<60)
	printf("\n Grade=B+");
		else if(avg>=40&&avg<50)
	printf("\n Grade=B");
		else if(avg>=30&&avg<40)
	printf("\n Grade=C");
		else if(avg>=25&&avg<30)
	printf("\n Grade=D");
	else
	printf("\n Fail");
	return 0;
}