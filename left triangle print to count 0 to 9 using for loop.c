#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=0;i<=3;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		printf("%d",count++);
	}
	getch();
	return 0;
}