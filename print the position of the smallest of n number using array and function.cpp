#include<stdio.h>
#include<conio.h>

void small_pos(int arr[],int n);

int main()
{
	int i,n,arr[20],small,pos;
	
	printf("\n Enter The Number Of Element In Array:-");
	scanf("%d",&n);
	
	printf("\n Enter The Element In Array:-");
	for(i=0;i<n;i++)
	{
	scanf("%d",arr[i]);
	}
	
	small_pos(arr,n);
	
	getch();
	
	return 0;
	
}

void small_pos(int arr[],int n)
{
	int small,pos,i;
	small=arr[0];
	pos=0;
	
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	small=printf("\n The Smallest Element Is:-%d",small);
pos=printf("\n The Position Of The Smallest Number In Array:-%d",pos);
}