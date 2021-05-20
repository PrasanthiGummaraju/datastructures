#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;	
}*head=NULL,*temp,*p1,*p;
void insert()
{
	int ch,i,r,x;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&x);
	temp->data=x;
	if(head==NULL)
	{
	temp->next=NULL;
	head=temp;	
	}
	else
	{
		printf("enter the choice");
		printf("1.atfirst\n2.atlast\n3.atany position");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:temp->next=head;
				head=temp;
				break;
			case 2:p=head;
				while(p->next!=NULL)
				{
					p=p->next;
				}
				p->next=temp;
				temp->next=NULL;
				break;
			case 3:printf("enter position for insertion");
					scanf("%d",&r);
					for(p=head,i=1;i<r;i++,p=p->next)
					{
						p1=p;
					}
					p1->next=temp;
					temp->next=p;
					break;
			case 4:exit(0);
		}
	}
}
void deletion()
{
	int ch,j,r;
	printf("enter the choice");
	printf("1.atfirst\n2.atlast\n3.atany position");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:head:
			temp=head;
			head=head->next;
			printf("%d is deleted",temp->data);
			free(temp);
			break;
		case 2:for(p=head;p->next!=NULL;p=p->next)
				p1=p;
				p1->next=NULL;
				printf("%d is deleted",p->data);
				free(p);
				break;
		case 3:printf("enter the position for deletion");
				scanf("%d",&r);
				if(r==1)goto head;
				else
				{
					for(p=head,j=1;j<r;j++,p=p->next)
					{
						p1=p;
					}
					p1->next=p->next;
					printf("%d is deleted",p->data);
					free(p);
				}
				break;
			case 4:exit(0);	
	}
}
void display()
{
	if(head==NULL)
	{
		printf("linked list empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		{
			printf("%d->",p->data);
		}
	}
}
void main()
{
	int ch;
	do
	{
		printf("enter choice");
		printf("1.insert\n2.deletion\n3.display\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			case 2:deletion();
			break;
			case 3:display();
			break;
			case 4:exit(0);
		}
	}while(ch<=3);
}
