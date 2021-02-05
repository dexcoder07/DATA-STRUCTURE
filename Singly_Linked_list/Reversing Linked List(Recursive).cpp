#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
	int data;
	Node * next;
	Node()
	{
		this->next = NULL;
	}
};

Node* create()
{
	Node* head = NULL, *temp = NULL,*new_node = NULL;
	cout<<"Enter the value of N: ";
	int n;
	cin>>n;
	while(n--)
	{
		new_node = new Node;
		cout<<"Enter the node data: ";
		cin>>new_node->data;
		if(head==NULL)
		{
			head = new_node;
			temp = head;
		}
		else
		{
			temp->next = new_node;
			temp = temp->next;
		}
		
	}
	return head;
}

void traverse(Node * p)
{
	while(p!=NULL)
	{
		cout<<p->data<<"  ";
		p = p->next;
	}
}

Node* reverse(Node * head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	Node* rest = reverse(head->next);
	Node* q = head->next;
	q->next = head;
	head->next = NULL;
	return rest;
}

int main(void)
{
	Node *head = NULL;
	head = create();
	cout<<"List before reversing:-\n";
	traverse(head);
	cout<<"\nList after reversing:\n";
	head = reverse(head);
	traverse(head);
	return 0;
}
