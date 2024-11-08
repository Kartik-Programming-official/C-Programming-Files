#include<stdio.h>
int main()
{
	int a,b,and,or,xor,complement,leftshift,rightshift;
	printf("\n Enter your first value a:-");
	scanf("%d",&a);
	printf("\n Enter your second value b:-");
	scanf("%d",&b);
	and=a&b;
	or=a|b;
	xor=a^b;
	complement=~a;
	leftshift=a<<2;
	rightshift=b>>3;
	printf("\n Bitwise AND of %d and %d=%d\n",a,b,and);
		printf("\n Bitwise OR of %d and %d=%d\n",a,b,or);
			printf("\n Bitwise XOR of %d and %d=%d\n",a,b,xor);
				printf("\n Bitwise COMPLEMENT of %d=%d\n",a,complement);
					printf("\n Bitwise 2 LEFT SHIFT of %d=%d\n",a,leftshift);
						printf("\n Bitwise 3 RIGHT SHIFT of %d=%d\n",b,rightshift);
						return 0;
}