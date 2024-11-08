#include <stdio.h>
#include <string.h>
#include<conio.h>

int countWords(char str[])
{
	
	if (strlen(str) == 0) {
		return 0;
	}

	char* token;
	char* delim = " \n\t";
	token = strtok(str, delim);
	int count = 0;
	while (token != NULL) {
		count++;
		token = strtok(NULL, delim);
	}

	return count;
}

int main()
{
	
	char str[100];
	
	printf("\n Enter Your String:-");
	gets(str);
	
	printf("\n No of words In Given String= %d", countWords(str));
	
	getch();
	
	return 0;
}