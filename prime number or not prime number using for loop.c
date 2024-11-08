#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("\n Enter any number:-");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			f++;
		}
	}
	if(f==0){
		printf("\n %d is a prime number",n);
	}
	else {
		printf("\n %d is not a prime number",n);
	}
	return 0;
}