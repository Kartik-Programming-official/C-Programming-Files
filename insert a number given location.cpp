#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,num,pos,arr[10];
	printf("\n Enter The Number Of Elements In The Array:-");
	scanf("%d",&n);
	printf("\n Enter The Values:-");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n Enter The Number To Be Inserted:-");
	scanf("%d",&num);
	printf("\n Enter The Position At Which The Number Has To Be Added:-");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
		arr[pos]=num;
		n++;
	printf("\n The Array After Insertion Of %d Is:-",num);
	for(i=0;i<n;i++)
		printf("\t %d",arr[i]);
	getch();
	return 0;
}