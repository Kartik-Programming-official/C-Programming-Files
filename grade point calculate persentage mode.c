 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int marks;
 	printf("\n Plase Enter Your Percentage:-");
 	scanf("%d",&marks);
 	if(marks=100 && marks >=95)
 	printf("\n OO Grade");
 	else if(marks<95 && marks>=90)
 	printf("\n AA Grade");
 	else if(marks<90 && marks>=85)
 	printf("\n A+ Grade");
 	else if(marks<85 && marks>=80)
 	printf("\n A Grade");
 	else if(marks<80 && marks>=75)
 	printf("\n B+ Grade");
 	else if(marks<75 && marks>=70)
 	printf("\n B Grade");
 	else if(marks<70 && marks>=60)
 	printf("\n C+ Grade");
 	else if(marks<60 && marks>=50)
 	printf("\n C Grade");
 	else if(marks<50 && marks>=35)
 	printf("\n D+ Grade");
 	else if(marks<35 && marks>=25)
 	printf("\n D Grade");
 	else {
 	printf("\n Fail The Student");
         }
 	getch();
 	return 0;
 }