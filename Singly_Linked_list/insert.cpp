#include<bits/stdc++.h>
using namespace std;


//First create some nodes then apply this method to insert the nodes




class Node
{
	public:
		int data;
		Node* next;
};


Node* G_head; 															//Global pointer for head


void insert()
{
	int choice;
	Node* temp=G_head;
	cout<<"Enter where you want to insert the node:\n";
	cout<<"1.At the Beginning\n2.At the End\n3.At the desired position\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			int value;
			cout<<"Enter the value:";
			cin>>value;
			Node* new_node=NULL;
			new_node=new Node;
			new_node->data=value;
			new_node->next=G_head->next;
			G_head->next=new_node;
			break;
		}
			
		case 2:
		{
			Node* temp=G_head,*new_node=NULL;
			int value;
			cout<<"Enter the value:";
			cin>>value;
			new_node=new Node;
			new_node->data=value;
			new_node->next=NULL;
			while(temp!=NULL)
			{
				temp=temp->next;
			}
			temp=new_node;
			break;
		}
			
		case 3:
		{
			int pos,value;
			Node* temp=G_head,*new_node=NULL;
		    cout<<"Enter the position:";
		    cin>>pos;
		    new_node=new Node;
		    cout<<"Enter the data:";
		    cin>>value;
		    new_node->data=value;
		    temp=G_head;
		    while(pos-2)
		    {
		        temp=temp->next;
		        pos--;
		    }
		    
		    new_node->next=temp->next;
		    temp->next=new_node;

			break;
		}
			
			
		default:
			cout<<"Enter correct choice\n";
	}
}


int main(void)
{
	insert();
	return 0;
}
