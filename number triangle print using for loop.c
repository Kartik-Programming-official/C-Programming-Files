#include<stdio.h>
#define N 5
int main()
{
	int i,j,k;
	for(i=1;i<=N;i++)
	{
		for(k=N;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
	getch();
	return 0;
}
