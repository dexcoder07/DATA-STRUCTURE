#include<iostream>
using namespace std;



class Node
{
	public:
		int data;
		Node* next;
};


Node* G_head; 															//Global pointer for head



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

//Before performing the search operation first create nodes then apply this method

int main(void)
{
	int position;						//stores the position of the searched element
	position = search();
	return 0;
}

