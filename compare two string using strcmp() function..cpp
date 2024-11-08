#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[100], b[100];    
    printf("\n Enter the first string:-");    
    gets(a);    

    printf("\n Enter the second string:-");    
    gets(b);
    
    if(strcmp(a,b)== 0)
        printf("\n Entered strings are equal.\n");
    else
        printf("\n Entered strings are not equal.\n");
        
        getch();
        
   
        return 0;
}