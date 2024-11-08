#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n,j,flag=0;
	printf("\n Enter The Size Of The Array:-");
	scanf("%d",&n);
	printf("\n Enter The Element Of Array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j]&&i!=j)
			{
				flag=1;
				printf("\n Duplicate Number Found At Location= %d And Number= %d",i,j);
			}
		}
	}
	if(flag==0)
	{
		printf("\n No Duplicate");
	}
	getch();
	return 0;
}