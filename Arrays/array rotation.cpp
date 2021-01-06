#include<bits/stdc++.h>
using namespace std;

void rotate1(int arr[], int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int d;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        rotate1(ar,7);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
