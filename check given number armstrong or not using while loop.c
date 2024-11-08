#include<stdio.h>
int main()
{
	int n,p,r,s=0;
	printf("\n Enter Any Number:-");
	scanf("%d",&n);
	p=n;
	while(n>0) {
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(s==p) {
		printf("\n %d Is A Armstrong Number",p);
	}
	else {
		printf("\n %d Is Not A Armstrong Number",p);
	}
	return 0;
}