#include<stdio.h>
#include<conio.h>
int main()
{
	char dest_str[100],source_str[50];
	int i=0,j=0;
	printf("\n Enter The Source String:-");
	gets(source_str);
	printf("\n Enter The Destination string:-");
	gets(dest_str);
	while(dest_str[i]!='\0')
		i++;
	while(source_str[j]!='\0')
	{
		dest_str[i] = source_str[j];
		i++;
		j++;
	}
	dest_str[i]='\0';
	printf("\n After appending , the destation string is:-");
	puts(dest_str);
	getch();
	return 0;
}