#include<bits/stdc++.h>
using namespace std;


//First create Nodes then apply this code to delete the Nodes





class Node
{
	public:
		int data;
		Node* next;
};


Node* G_head; 															//Global pointer for head



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

int main(void)
{
	del();
	return 0;
}
