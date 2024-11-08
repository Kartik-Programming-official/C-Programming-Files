#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],num,i,n,beg,end,mid,found=0;
	printf("\n Enter The Number Of Element In The Array:-");
	scanf("%d",&n);
	printf("\n Enter The Element:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Enter The Number That has To Be Searched:-");
	scanf("%d",&num);
	beg=0,end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==num)
		{
			printf("\n %d Is Present In The Array At Position= %d",num,mid);
			found=1;
			break;
		}
		else if(arr[mid]>num)
			end=mid-1;
		else 
			beg=mid+1;
	}
	if(beg>end && found==0)
		printf("\n %d Does Not Exist In The Array",num);
	getch();
	return 0;
}