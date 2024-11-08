#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i=0,vowelcount=0,con;
	char str[100];
	printf("\n Enter Your String:-");
	gets(str[i]);
	while (str[i]='\0')
		if(str[i]=="A"||str[i]=="a"||str[i]=="E"||str[i]=="e"||str[i]=="I"||
		str[i]=="i"||str[i]=="O"||str[i]=="o"||str[i]=="U"||str[i]=="u")
		{
			vowelcount++;
			i++;
			con=strlen(str)-vowelcount;
			printf("\n The Vowel count is %d consonent count is %d",vowelcount,con);
		}
		getch();
		return 0;
}