#include<stdio.h>
#include<conio.h>

void merge(int a[],int,int,int);

void merge_sort(int a[],int,int);

int main()
{
	int arr[100],i,n;
	
	printf("\n Enter The Number Of Elements In The Array:-");
	scanf("%d",&n);
	
	printf("\n Enter The Element Of The Array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	merge_sort(arr,0,n-1);
	
	printf("\n The Sorted Array Is:-");
	for(i=0;i<n;i++)
	{
	printf("\t %d",arr[i]);	
	}
	
	getch();
	
	return 0;
}

void merge(int arr[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,index=beg,temp[10],k;
	
	while((i<=mid) && (j<=end))
	{
		if(arr[i]<arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else {
			temp[index]=arr[j];
			j++;
		}
		index++;
	}
	
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=arr[j];
			
			j++;
			
			index++;
			
		}
		
	}
	else 
	{
		while(i<=mid)
		{
			temp[index]=arr[i];
			
			i++;
			
			index++;
			
		}
		
	}
	for(k=beg;k<index;k++)
		
		arr[k]=temp[k];
}

void merge_sort(int arr[],int beg,int end)
{
	int mid;
	
	if(beg<end)
	{
		mid=(beg+end)/2;
		
		merge_sort(arr,beg,mid);
		
		merge_sort(arr,mid+1,end);
		
		merge(arr,beg,mid,end);
		
	}
	
}