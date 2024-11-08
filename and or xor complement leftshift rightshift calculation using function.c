#include<stdio.h>
#include<conio.h>
int call1(int,int);

int call2(int,int);

int call3(int,int);

int call4(int);

int call5(int);

int call6(int);

int call7(int);

int call8(int);

int call9(int);

int call10(int);

int call11(int);

int call12(int);

int call13(int);

int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	
	printf("\n Enter The Value Of A:-");
	scanf("%d",&a);
	
	printf("\n Enter The Value Of B:-");
	scanf("%d",&b);
	
c=call1(a,b);
printf("\n The Bitwise And of %d and %d= %d",a,b,c);

d=call2(a,b);
printf("\n The BitWise OR of %d and %d= %d",a,b,d);

e=call3(a,b);
printf("\n The Bitwise XOR of %d and %d=%d",a,b,e);

f=call4(a);
printf("\n The Bitwise Compliment Valu of A %d= %d",a,f);

g=call5(b);
printf("\n The Bitwise Complement Valu Of B %d= %d",b,g);

h=call6(a);
printf("\n The Bitwise 2Left Shift of Valu A %d= %d",a,h);

i=call7(b);
printf("\n The Bitwise 2Left Shift of Valu B %d= %d",b,i);

j=call8(a);
printf("\n The Bitwise 3Left Shift of Value A %d= %d",a,j);

k=call9(b);
printf("\n The Bitwise 3Left shift of Value B %d= %d",b,k);

l=call10(a);
printf("\n The Bitwise 2Right Shift of Value A %d= %d",a,l);

m=call11(b);
printf("\n The Bitwise 2Right Shift of Value B %d= %d",b,m);

n=call12(a);

printf("\n The Bitwise 3Right Shift of Value A %d= %d",a,n);

o=call13(b);
printf("\n The Bitwise 3Right Shift of Value B %d= %d",b,o);

getch();

return 0;
	
}


int call1(int x1,int y1)

{
	int z1;
	z1=x1&y1;
	
	return z1;
}
int call2(int x2,int y2)
{
	int z2;
	z2=x2|y2;
	
	return z2;
}
int call3(int x3,int y3)
{
	int z3;
	z3=x3^y3;
	
	return z3;
}
int call4(int x4)
{
	int z4;
	z4=~x4;
	
	return z4;
}
int call5(int y4)
{
	int z5;
	z5=~y4;
	
	return z5;
}
int call6(int x5)
{
	int z6;
	z6=x5<<2;
	
	return z6;
}
int call7(int y5)
{
	int z7;
	z7=y5<<2;
	
	return z7;
}
int call8(int x6)
{
	int z8;
	z8=x6<<3;
	
	return z8;
}
int call9(int y6)
{
	int z9;
	z9=y6<<3;
	
	return z9;
}
int call10(int x7)
{
	int z10;
	z10=x7>>2;
	
	return z10;
}
int call11(int y7)
{
	int z11;
	z11=y7>>2;
	
	return z11;
}
int call12(int x8)
{
	int z12;
	z12=x8>>3;
	
	return z12;
}
int call13(int y8)
{
	int z13;
	z13=y8>>3;
	
	return z13;
}