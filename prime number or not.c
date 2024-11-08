#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("Enter A Number:-");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			f++;
		}
	}
	if(f==0){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
	return 0;
}