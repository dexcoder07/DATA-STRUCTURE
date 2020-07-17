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
    cout<<"Enter data:";
    cin>>data;
    new_node->data=data;
    if(data==-1)
    {
        return 0;
    }
    cout<<"Enter left Node of :"<<data<<endl;
    new_node->left=create();
	cout<<"Enter Right Node of:"<<data<<endl;;
	new_node->right=create();
	return new_node;
}


//Postorder Traversal of the Binary tree


void postorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<"  ";
}


//Main Function

int main(void)
{
	Node* root=NULL;
	root=create();
	
	postorder(root);
	return 0;
}
