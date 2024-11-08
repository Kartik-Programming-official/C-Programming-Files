#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
	printf("\n Enter the number of element in the stack:-");
	scanf("%d",&n);
	printf("\n************ stack operation using array*******");
	printf("\n----------------------------------------------\n");
	while(choice!=4)
	{
		printf("\n Choice one from the below option---------");
		printf("\n 1.Push \n 2.Pop \n 3.Show \n 4.Exit");
		printf("\n Enter Your Choice:-");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
				{
					push();
					break;
				}
				case2:
					{
					pop();
					break;
				}
				case3:
					{
						show();
						break;
					}
					case4:
						{
							printf("\n Exiting--------");
							break;
						}
						default:
							{
								printf("\n Please Enter valid choice");
							}
		}
	}
}
void push()
{
	int val;
	if(top==n)
	{
	printf("\n Overflow");
}
else {
	printf("\n Enter the value:-");
	scanf("%d",&val);
	top=top++;
	stack[top]=val;
}
}
void pop()
{
	if(top==-1)
	{
		printf("\n Underflow");
	}
	else {
		top=top--;
	}
}
void show()
{
	for(i=top;i>=0;i--)
	{
		printf("\n %d",stack[i]);
	}
	if(top==-1)
	{
		printf("\n Stack is empty");
	}
}