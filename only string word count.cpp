#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int wordcount=0,i;
	char sentence[100];
	printf("\n Enter Your String:-");
	gets(sentence);
	
	for(i=0;i<strlen(sentence)-1;i++)
	{
		if(sentence[i]==''&&(sentence[i+1])&&(i>0))
		{
			wordcount=wordcount+1;
		}
	}
	wordcount++;
	printf("\n Total Number Of Words In The Given String=%d",wordcount);
	getch();
	return 0;
}