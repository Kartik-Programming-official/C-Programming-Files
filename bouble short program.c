#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6]={15,7,2,1,17,3},n,i,j,temp;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++) {
		printf("%d \t",a[i]);
	}
	getch();
	return 0;
}