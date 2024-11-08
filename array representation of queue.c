#include<stdio.h>
#include<conio.h>
#define maxsize 5
void insert();
void delete();
void display();
int front=-1,rare=-1;
int queue[maxsize];
void main()
{
int choice;
while(choice !=4)
{
	printf("\n*******Main Menu*******");
printf("\n 1.Insert Element\n 2.Delete Element\n 3.Disply Queue\n 4.Exit");
printf("\n Enter Your choice:-");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	insert();
	break;
case 2:
delete();
break;
case 3:
display();
break;
default:
	printf("\n Enter Valid Choice");
}	
}
void insert()
{
	int item;
	printf("\n Enter The Element:-");
	scanf("%d",&item);
	if(rare==maxsize-1)
	{
		printf("\n Overflow");
		return;
	}
	if(front==-1&&rare==-1)
	{
		front=0;
		rare=0;
	}
	else
	{
		rare=rare+1;
	}
	queue[rare]=item;
	printf("\n Value Inserted");	
}
void delete()
{
	int item;
	if(front=-1||front>rare)
	{
		printf("\n Underflow");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rare)
		{
			front=-1;
			rare=-1;
		}
		else
		{
			front=front+1;
			printf("\n Value delete");
		}
	}
}
	void display()
	{
		int i;
		if(rare==-1)
		{
		printf("\n Empty Queue");
		}
		else
		{
			printf("\n Printiy Value \n");
		}
		for(i=front;i<=rare;i++)
		{
			printf("\n queue[i]");
		}
	}
}