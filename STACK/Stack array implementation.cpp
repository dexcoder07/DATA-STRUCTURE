#include<bits/stdc++.h>
using namespace std;

#define MAX 50

int top=-1;
int stackk[MAX]={0};

void push(int element)
{
    if(top>MAX)
    {
        cout<<"Stack overflow\n";
    }
    else
    {
        ++top;
        stackk[top]=element;
    }
    
}


void display()
{
    if(top==-1)
    {
        cout<<"No element in stack";
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<stackk[i]<<"  ";
        }
    }
    cout<<endl;
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow\n";
    }
    else
    {
        --top;
    }
}
int main(void)
{
    int option=1;
    while(option!=2)
    {
        int e;
        cout<<"Enter the element of stack:";
        cin>>e;
        push(e);
        cout<<"Press 1 to continue\nPress 2 to Exit\n";
        cin>>option;
    }
    display();
    pop();
    pop();
    display();
    return 0;
}