#include<stdio.h>
#include<conio.h>
#include<string.h>

void call(char str[]);

int main()
{
	int i=0;
	
	char str[100];
	
	printf("\n Enter A string:-");
	gets(str);
	
	call(str);
	
	getch();
	
	return 0;
}

void call(char str[])

{
	
int i=0,vowelcount=0;
	
		while(str[i] !='\0')
	{
		if(str[i] == 'A'|| str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||
			 
		str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || 
	
        str[i ]== 'U' || str[i] == 'u')
        
		{
			
			vowelcount=vowelcount+1;
			
		}
		
		i=i+1;
		
	}
	printf("\n The Vowel Count=%d",vowelcount);
	
}