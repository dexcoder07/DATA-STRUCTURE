#include<iostream>
using namespace std;

														//Class

class Node
{
	public:
		int data;
		Node* next;
};


Node* G_head; 															//Global pointer for head


														//CREATE NODE

Node* create()
{
	Node *head=NULL,*temp=NULL,*new_node=NULL;
	int n,value;
	cout<<"Enter the number of nodes:";
	cin>>n;
	while(n!=0)
	{
		new_node = new Node;
		cout<<"Enter the node data:";
		cin>>value;
		new_node->data=value;
		new_node->next=NULL;
		if(head==NULL)
		{
			head=new_node;
			temp=head;
		}
		else
		{
			temp->next=new_node;
			temp=temp->next;
		}
		
		n--;
	}
	
	return head;
}


int main(void)
{
	G_head=create();
	return 0;
}
