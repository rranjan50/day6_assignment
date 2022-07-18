//print mth node to last node
#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int roll;
	struct student *link;
};
struct student *addlast(struct student *ptr);
struct student *find_mth_node_to_last(struct student *ptr,int m);
void display(struct student *ptr);
int main()
{
	struct student *head=NULL;
	int m;
	printf("enter the node:\n");
	scanf("%d",&m);
        int choice;
        while(1)
        {
                printf("1.Addlast 2.print from given node 3.diplay 4.exit\n");
                printf("enter the choice");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:head=addlast(head);
                               break;
                        case 2:head=find_mth_node_to_last(head,m);
                               break;
                        case 3:display(head);
                               break;
                        case 4:exit(0);
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
struct student *find_mth_node_to_last(struct student *ptr,int m)
{
	struct student *temp=NULL;
	int count=0;
	temp=ptr;
	if(temp==NULL)
	{
		printf("list is empty:\n");
	}
	else
	{
	while(temp)
	{
		count++;
		if(count>=m)
		{
			printf("%d\n",temp->roll);
		}
		temp=temp->link;
	}
	printf("\n");
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
