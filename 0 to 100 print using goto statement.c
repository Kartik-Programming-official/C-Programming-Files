#include<stdio.h>
int main()
{
	int a=0;
		seq: {
		printf("\n %d",a);
	}
		a++;
		if(a<=100)
				goto seq;
	return 0;
}