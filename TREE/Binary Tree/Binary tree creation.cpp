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
    cout<<"Enter the data:";
    cin>>data;
    new_node->data=data;
    if(data==-1)
    {
        return 0;
    }
    cout<<"Enter left Node:\n";
    new_node->left=create();			//Left Node Creation
	cout<<"Enter Right Node:\n";
	new_node->right=create();			//Right Node Creation
	return new_node;
}

//MAIN FUNCCTION


int main(void)
{
	Node* root=NULL;
	root=create();
	
	preorder(root);
	return 0;
}



//Note:-
//At the terminal point input -1 to Store NULL for that node
//If you are at a node input -1 to assign NULL to left node and than again -1 to assign NULL to the right node for the present node
