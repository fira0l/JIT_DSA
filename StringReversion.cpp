#include<iostream>
using namespace std;

struct node{
	string item;
	node *next;
};

node *stack=NULL;
node *top=stack;
node *bottom=stack;

void push(string val){
	node *newnode=new node();
	if(stack==NULL){
		newnode->item=val;
		newnode->next=NULL;
		stack=newnode;
		top=stack;
	}
	else{
		newnode->item=val;
		newnode->next=NULL;
		top->next=newnode;
		top=newnode;
	}
	
	
}

string pop(){
	string pop_val;
	node* target=stack;
	
	if(stack==NULL){
		cout<<"Stack underflow ";
	}
	else
	{
		if(top==bottom){
			pop_val=top->item;
			delete top;
			stack=NULL;
			top=bottom=stack;
		}
		else{
			pop_val=top->item;
			while(target->next!=top){
				target=target->next;
			}
			delete top;
			top=target;
			target->next=NULL;
		}
	}
		return(pop_val);
}

void display(){
	node *temp=stack;
	if(stack==NULL){
		cout<<"The stack is empty ";
	}
	else
	{
		do{
			cout<<" "<<temp->item;
			temp=temp->next;
		}
		while(temp!=stack);
	}
}

int main(){
	push("A");
	push("B");
	push("C");
	push("D");
	
	cout<<	pop();
	cout<<	pop();
	cout<<	pop();

	
	display();
	return 0;
}
