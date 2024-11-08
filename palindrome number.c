#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("\n ENTER A NUMBER:-");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
		if(temp==sum){
			printf("is a palindrom number");
		}
		else
		{
			printf("is not a palindrom number");
		}
	return 0;
}