#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head,*temp,*newnode;

void design();
void create();
void display();
void insert();
void insert_begin();
void insert_end();
void insert_particular();
void main()
{
int choice,menu=1;
design();
printf("\t\t SINGLE LINKED LIST\n\n");
design();
while(menu)
{
printf("Enter \n 1.Create \n 2.Display\n 3.Insert\n\n");
printf("Enter your choice : \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
printf("\n");
display();
break;
case 3:
insert();
break;
default:
printf("Incorrect option\n\n");
break;
}
printf("\nEnter \n 0.For close. \n Enter any number For Menu.\n\n");
printf("Enter your choice : \n");
scanf("%d",&menu);
}
}

void design()
{
int i,j;
for(i=0;i<15;i++)
{
printf("====");
}
printf("\n\n");
}

void create()
{
if(head==0)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
newnode->next=0;
head=newnode;
printf("Node Successfully created");
}
else
{
printf("Node already created ");
}
}

void display()
{
if(head==0)
{
printf("There is no data :) ");
}
else
{
temp=head;
printf("Your data in Linked List is \n");
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}

void insert()
{
if(head!=0)
{
int insertopt;
printf("\nEnter\n 1.For Insertion at beginning\n 2.For insertion at End\n 3.For Insertion at particular position\n\n");
printf("Enter choice : ");
scanf("%d",&insertopt);
switch(insertopt)
{
case 1:
insert_begin();
break;
case 2:
insert_end();
break;
case 3:
insert_particular();
break;
default:
printf("Entered Wrong option!");
break;
}
}
else
{
printf("First use Create option & next use this option\n\n");
}
}

void insert_begin()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}

void insert_end()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=newnode;
}

void insert_particular()
{
int position,count=1,i=1;
if(head==0)
{
printf("Create node first ");
}
else
{
temp=head;
while(temp->next!=0)
{
count++;
temp=temp->next;
}
printf("%d positions are there...\n",count); 
printf("Enter position to insert : ");
scanf("%d",&position);
if(position>count)
{
printf("Position is not valid ");
}
else if(position==1)
{
insert_begin();
}
else if(position==0)
{
printf("Invalid position");
}
else
{
temp=head;
while(i!=position-1)
{
temp=temp->next;
i++;
}
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;
}
}
}

