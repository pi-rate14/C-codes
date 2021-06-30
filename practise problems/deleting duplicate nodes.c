#include<stdio.h>
#include<stdlib.h>
struct node
{
	int item;
	struct node* next;
};struct node* head=0;
void disp()
{
	struct node* new_node;
	new_node=head;
	while(new_node!=0)
	{
		printf("\n\t-> %d ",new_node->item);
		new_node=new_node->next;
	}
}
void ins()
{
	struct node* new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter item: ");
	scanf("%d",&new_node->item);
	new_node->next=0;
	if(head==0)
	{
		head=new_node;
	}
	else
	{
		struct node* x;
		x=head;
		while(x->next!=0)
		{
			x=x->next;
		}
		x->next=new_node;
	}
}
void del()
{
	struct node* temp;
	temp=head;
	printf("\n\tElements Deleted.");
	while(temp->next!=0)
	{
		if (temp->item==temp->next->item)
		{
			struct node* new_node = temp->next->next;
			free(temp->next);
			temp->next=new_node;
		}
		else
		{
			temp=temp->next;
		}
	}
}
int main()
{
	char ch;
	int choice;
	do
	{
		printf("\n\t1.Insert values in the list\n\t2.Delete the duplicate values\n\t3.Display list\n\t");
		printf("\n\tEnter choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				ins();
				break;
			case 2:
				del();
				break;
			case 3:
				disp();
				break;
		}
		printf("\n\tContinue? y/n ");
		scanf("%s",&ch);
	}while(ch=='y' || ch=='Y');
	return 0;
}
