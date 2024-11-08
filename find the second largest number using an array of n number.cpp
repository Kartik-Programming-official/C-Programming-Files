#include<stdio.h>
#include<conio.h>
int mai()
{
	int i,n,arr[20],pos,largest,second_largest;
	printf("\n Enter The Number Of Element In Array:-");
	scanf("%d",&n);
	printf("\n Enter The Number Of Element:-");
		for(i=0;i<n;i++)
	{
     scanf("%d",&arr[i]);
	}
	largest=arr[0];
	pos=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
			pos=i;
		}
	}
	second_largest=arr[n-pos-1];
	for(i=0;i<n;i++)
	{
		if(i!=pos)
		{
			if(arr[i]>second_largest)
				second_largest=arr[i];
		}
	}
	printf("\n The Numbers You Entered Are:-");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n The Largest Of Thes Number Is:-%d",largest);
	printf("\n The Second Largest Of Thes Number Is:-%d",second_largest);
	getch();
	return 0;
}