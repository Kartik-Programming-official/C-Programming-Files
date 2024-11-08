#include<stdio.h>
#include<conio.h>

void prime_number(int,int);

int main()
{
	int l,u;
	
	printf("\n Enter your lower value:-");
	scanf("%d",&l);
	printf("\n Enter your upper value:-");
	scanf("%d",&u);
	
	prime_number(l,u);
	
	getch();
	
	return 0;
}

void prime_number(int x,int y)
{
	int i,j,f=0;
	
		for(i=x;i<=y;i++){
		f=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				f++;
		}
	}
	 if(f==0){
		 printf("\n %d",i);
	}
}

}