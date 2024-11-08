#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num=0,arr[100],n,i;
	printf("\n Enter Your Array Size= ");
	scanf("%d",&n);
	printf("\n Enter Your Value:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	while(i<n)
	{
	num=num+arr[i] * pow(10,i);
	i++;
    }
    printf("\n The Reversed Number Is=%d",num);
    getch();
    return 0;
}