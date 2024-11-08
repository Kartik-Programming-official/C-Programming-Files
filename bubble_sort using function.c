#include<stdio.h>
#include<conio.h>

void bubble_sort(int arr[],int n);

int main()
{
	int i,n,arr[10];
	
	printf("\n Enter The Number Of Element:-");
	scanf("%d",&n);
	
	printf("\n Enter the Element:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubble_sort(arr,n);
	printf("\n The sorted Element=");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	
	getch();
	
	return 0;
}

void bubble_sort(int arr[],int n)
{
	int i,j,temp;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}