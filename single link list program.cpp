#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *creat(struct node *);
struct node *display(struct node *);
struct node *insert_any_position(struct node *);

int main()
{
	int option;

do 
{
	printf("\n *****main menu*****");
	printf("\n 1.Creat link_list \n 2.Display. \n 3.Insert after.\n 4.Exit.");
	printf("\n Enter Your Option:-");
	scanf("%d",&option);
	switch(option)
	{
		case 1: start=creat(start);
		printf("\n Link_list creat");
		break;
        case 2: start=display(start);
   	            break;
        case 3: start=insert_any_position(start);
    			break;
	}
}while(option!=4);

getch();

return 0;

}

struct node *creat(struct node *start)
{
	
struct node *head,*first;
int num;
printf("\n Enter -1 to End");
printf("\n Enter The Data:-");
scanf("%d",&num);
while(num!=-1)
{
	head=(struct node *)malloc(sizeof(struct node));
	head->data=num;
	if(start==NULL)
	{
		head->next=NULL;
		start=head;
	}
	else {
		first=start;
		while(first->next!=NULL)
		first=first->next;
		first->next=head;
		head->next=NULL;
	}
	printf("\n Enter The Data:-");
	scanf("%d",&num);
}
return start;
	
}

struct node *display(struct node *start)
{
	struct node *n;
	n=start;
	while(n!=NULL)
	{
		printf("\t %d",n->data);
		n=n->next;
	}
	return start;
}

struct node *insert_any_position(struct node *start)
{
	struct node *head,*first,*n;
	int location,data;
		printf("\n Enter Your Location Wher You Want To Insert:-");
	scanf("%d",&location);
	printf("\n Enter Your Data:-");
	scanf("%d",&data);
	head=(struct node *)malloc(sizeof(struct node));
	head->data=data;
	first=start;
	n=first;
	while(n->data!=location)
	{
		n=first;
		first=first->next;
	}
	n->next=head;
	head->next=first;
	return start; 
}