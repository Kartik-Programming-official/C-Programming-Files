#include<stdio.h>
#include<conio.h>

void insertion_sort(int arr[],int n);

int main()
{
	int arr[20],i,n;
	
	printf("\n Enter The Number Of Element:-");
	scanf("%d",&n);
	
	printf("\n Enter The Element:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	insertion_sort(arr,n);
	printf("\n The Sorted Array=");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	
	getch();
	
	return 0;
}

void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		
		j=i-1;
		
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			
			j--;
		}
		arr[j+1]=temp;
	}
}