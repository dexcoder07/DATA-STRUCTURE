
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

//Creating Node

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

//Traversing List

void traverse(Node * p)
{
	while(p!=NULL)
	{
		cout<<p->data<<"  ";
		p = p->next;
	}
}

//Reversing List

Node* reverse(Node *temp)
{

	Node *head = temp, *cur = temp;
	Node * p = NULL, *prev = NULL;
  
	while(cur!=NULL)
	{
		p = cur->next;

		cur->next = prev;

		prev = cur;

		cur = p;
	}

	head = prev;
	return head;
}

int main(void)
{
	Node *head = NULL;
	head = create();
	//head = insert(head);
	head = reverse(head);
	traverse(head);
	return 0;
}
