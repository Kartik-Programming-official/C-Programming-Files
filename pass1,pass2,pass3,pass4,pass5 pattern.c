#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;j<=5;i++)
	{
		printf("\n pass %d- ",i);
		for(j=1;j<=5;j++)
		printf("\n %d",j);
	}
	return 0;
}