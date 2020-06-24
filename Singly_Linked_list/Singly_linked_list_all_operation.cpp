#include<bits/stdc++.h>
using namespace std;


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


															//TRAVERSE

void traverse()
{
	Node* temp=G_head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}


													//SEARCH

int search()
{
	int count=0,value;
	Node*temp=G_head;
	cout<<"Enter the value you want to search:";
	cin>>value;
	while(temp!=NULL)
	{
		if(value==temp->data)
		{
			cout<<"\nElement found\n";
			break;
		}
		temp=temp->next;
		count++;
	}
	return (count+1);
}


													//INSERT NODE


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


															//DELETE

void del()
{
	int choice;
	cout<<"Enter the action you wish to perform:\n";
	cout<<"1.Delete the beginning node\n2.Delete at the given position\n3.Delete the end node:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				G_head=G_head->next;
				break;
			}
		case 2:
			{
				int value;
				Node *p=NULL,*q=NULL;
				p=G_head;
				q=G_head->next;
				cout<<"Enter the data you want to delete:";
				cin>>value;
				while(q->data!=value)
				{
					p=p->next;
					q=q->next;
				}
				p->next=q->next;
				break;
			}
			
		case 3:
			{
				Node *p=NULL,*q=NULL;
				p=G_head;
				q=G_head->next;
				while(q->next!=NULL)
				{
					p=p->next;
					q=q->next;
				}
				p->next=NULL;
				break;
			}
			
			default:
				cout<<"Enter valid choice\n";
	}
}


											//MAIN FUNCTION

int main(void)
{	
	string n="yes";
	int choice;
	Node* head_node=NULL;
    cout<<"Enter the choice you wish to perform:\n";
    
    while(n!="no")
    {
    	cout<<"1.To create the list\n2.To insert a new node\n3.To search an element in node\n4.To traverse the list\n5.To delete node\n";
   		cin>>choice;
    	switch(choice)
	    {
	    	case 1:
			{
				
	    		head_node=create();
	    		G_head=head_node;
				break;
			}
	    	case 2:
			{
	    		insert();
				break;
			}
			case 3:
			{
				search();
				break;
			}
			case 4:
			{
				traverse();
				break;
			}
			case 5:
				{
					del();
					break;
				}	
		}
		cout<<"\nDo you wish to continue:\n1.Type yes to continue\n2.Type no to exit\n";
		cin>>n;
	}
	return 0;
}
