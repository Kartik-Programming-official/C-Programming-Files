#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,root;
	printf("\n Entrt Your Value:-");
	scanf("%d",&n);
	root=sqrt(n);
	if(n=root*root)
	{
		printf("\n Perfect square.");
	}
	else{
		printf("\n Not Perfect Square.");
	}
	getch();
	return 0;
}