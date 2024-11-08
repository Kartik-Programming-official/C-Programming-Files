#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,arr[20],small,pos;
	printf("\n Enter The Number Of Element In The Array:-");
	scanf("%d",&n);
	printf("\n Enter The Element:-");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
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
printf("\n The Smallest Element Is:-%d",small);
printf("\n The Position Of The Smallest Element In The Array Is:-%d",pos);
getch();
return 0;
}