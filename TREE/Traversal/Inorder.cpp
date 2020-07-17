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


//Inorder Traversal of the Binary tree


void Inorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
    Inorder(root->left);
    cout<<root->data<<"  ";
	Inorder(root->right);
}


//Main Function

int main(void)
{
    cout<<"For NULL Enter value -1"<<endl;
	Node* root=NULL;
	root=create();
	
	Inorder(root);
	return 0;
}
