#include<stdio.h>
#include<conio.h>
#include<string.h>

int call(char str[]);

int main()
{
 char str[100];
 
 int length;
 
 printf("\n Enter Your String:-");
 gets(str);
 
 length = call(str);
 
 printf("\n The Number Of Word In A string = %d",length);
 
 getch();
 
 return 0;  
 
}

int call(char str[])
{
	int length;
	
	length=strlen(str);
	
	return length;
	
}
