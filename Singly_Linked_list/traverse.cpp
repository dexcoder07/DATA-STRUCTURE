#include<iostream>
using namespace std;



	//First you have to create the nodes then you have to traverse it
	//First create the nodes then use this function to implement it



class Node
{
	public:
		int data;
		Node* next;
};

Node* G_head=NULL;										//Global head pointer



void traverse()
{
	Node* temp=G_head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}


int main(void)
{
	traverse();
	return 0;
}
