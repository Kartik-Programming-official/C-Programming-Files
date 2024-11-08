#include<stdio.h>
#include<conio.h>

int smallest(int arr[],int k,int n);

void selection_sort(int arr[],int n);

int main()
{
	int arr[10],i,n;
	
	printf("\n Enter The Number Of Element:-");
	scanf("%d",&n);
	
	printf("\n Enter Array Element:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	selection_sort(arr,n);
	
	printf("\n Sorted Array Element=");
	
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	
	getch();
	
	return 0;
}

int smallest(int arr[],int k,int n)
{
	int pose=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pose=i;
		}
	}
	return pose;
}

void selection_sort(int arr[],int n)
{
	int k,temp,pos;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}