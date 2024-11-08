#include<stdio.h>
int main()
{
	int l,u,i,j,f;
	printf("\n Enter your lower value:-");
	scanf("%d",&l);
	printf("\n Enter your upper value:-");
	scanf("%d",&u);
	for(i=l;i<=u;i++){
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
	return 0;
}