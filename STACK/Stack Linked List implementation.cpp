#include<bits/stdc++.h>
using namespace std;

class stk
{
    public:
        int data;
        stk* next;
};

stk* top=NULL;

void push(int element)
{
    stk* new_node=NULL;
    new_node=new stk{element,nullptr};
    if(top==NULL)
    {
        top=new_node;
    }
    else
    {
        new_node->next=top;
        top=new_node;
    }
}


void display()
{
    stk* temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}

void pop()
{
    if(top==NULL)
    {
        cout<<"under flow\n";
    }
    else
    {
        top=top->next;
    }
}

int main(void)
{
    int option=1;
    while(option!=2)
    {
        int n;
        cout<<"Enter the element of stack:";
        cin>>n;
        push(n);
        cout<<"Press 1 to continue\nPress 2 to Exit\n";
        cin>>option;
    }
    pop();
    display();
    return 0;
}