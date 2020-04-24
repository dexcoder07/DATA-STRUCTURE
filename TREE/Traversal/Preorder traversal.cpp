#include<iostream>
using namespace std;

//Structure creation Node

struct Node
{
    int data;
    Node* left;
    Node* right;
};

//Node creation

Node* create()
{
    Node* new_node=NULL;
    int data;
    new_node=new Node();
    cout<<"Enter the data:";
    cin>>data;
    new_node->data=data;
    if(data==-1)
    {
        return 0;
    }
    cout<<"Enter left Node:\n";
    new_node->left=create();
	cout<<"Enter Right Node:\n";
	new_node->right=create();
	return new_node;
}


//Preorder Traversal of the Binary tree


void preorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<"  ";
	preorder(root->left);
	preorder(root->right);
}


//Main Function

int main(void)
{
	Node* root=NULL;
	root=create();
	
	preorder(root);
	return 0;
}
