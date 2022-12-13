#include <iostream>

	using namespace std;

struct node{
	int data;
	node * next;
};

node *head=NULL;

void iatb(int val)
{
		node *newnode=new node();
		newnode->data=val;
		if(head==NULL)
		{
		head=newnode;	
		newnode->next=NULL;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
		
}

void iate(int val)
{
	node *temp=head; 	
	node *newnode=new node();
	newnode->data=val;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=NULL;
	}
	
	else
	{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->next=newnode;
		newnode->next=NULL;
	
	
	}
	
	
}

	void iatal(int val,int location)
	{
		node *newnode=new node();
		node *temp=head;
		newnode->data=val;
		for(int i=0;i<(location-2);i++)
		{
			temp=temp->next;
		}
		temp->next=newnode->next;
		newnode->next=temp->next;
		temp->next=newnode;
	 } 
void display()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void display2()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


void display3()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
	
}


int main() {
	iatb(1);
	iatb(2);
	iatb(3);
	iatb(4);
//	display();
	iate(6);
	iate(7);
	iate(8);
	iate(9);
	display2();
	iatal(10,1);
	iatal(11,2);
	iatal(12,4);
	iatal(13,5);
	iatal(14,3);
	display3();
	return 0;
}
