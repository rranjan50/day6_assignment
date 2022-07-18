#include<stdio.h>
#include<stdlib.h>
struct student *addlast(struct student *ptr);
struct student *addfirst(struct student *ptr);
struct student *addatpos(struct student *ptr);
struct student 
{
	int roll;
	struct student *link;
};
int main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
		printf("1.Addlast 2.Addfirst 3.addmiddle 4.diplay 5.exit\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=addlast(head);
			       break;
			case 2:head=addfirst(head);
			       break;
			case 3:head=addatpos(head);
			       break;
			case 4:display(head);
			       break;
			case 5:exit(0);
		}
	}
}
struct student *addlast(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("node not created :\n");
	}
	else
	{
	printf("enter the roll:\n");
        scanf("%d",&newnode->roll);
	if(ptr==NULL)
	{
		ptr=newnode;
	}
	else
	{
		temp=ptr;
		while(temp->link)
		{
			temp=temp->link;

		}
		temp->link=newnode;
	}
	}
	return ptr;
}
void display(struct student *ptr)
{
		if(ptr==NULL)
		{
			printf("list is empty:\n");
		}
		else 
		{
			while(ptr)
			{
				printf("%d\n",ptr->roll);
				ptr=ptr->link;
			}
		}
}
struct student *addfirst(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		printf("enter roll:");
		scanf("%d",&newnode->roll);
	        newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}
struct student *addatpos(struct student *ptr)
{
	int m,count=1;
	struct student *newnode=NULL,*temp=NULL;
	printf("enter the node where to insert:");
	scanf("%d",&m);
	newnode=calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		printf("enter the roll:\n");
		scanf("%d",&newnode->roll);
		temp=ptr;
		while(temp && count!=m)
		{
			temp=temp->link;
			count++;
		}
		newnode->link=temp->link;
		temp->link=newnode;
	}
	return ptr;
}














