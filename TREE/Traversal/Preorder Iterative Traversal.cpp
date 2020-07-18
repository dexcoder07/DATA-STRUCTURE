#include<iostream>
using namespace std;

int count=1;


//STRUCTURE CREATION


struct Node
{
    int data;
    Node* left;
    Node* right;
};


//NODE CREATION



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



//Iterative Inorder Traversal


void Preorder(Node* head)
{
    Node* stk[50]={NULL};
    int top=-1;
    Node* p=head;
    while(1)
    {
        while(p)
    {
        stk[++top]=p;
        cout<<p->data<<" ";
        p=p->left;
    }
    if(top==-1)
    {
        break;
    }
    p=stk[top];
    --top;
    p=p->right;
    }
}


//MAIN FUNCCTION


int main(void)
{
	Node* root=NULL;
	root=create();
	
	Preorder(root);
	return 0;
}