#include<bits/stdc++.h>
using namespace std;

void rotate1(int arr[],int d, int n)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }
    int j=0;
    for(int i = n-d;i<n;i++)
    {
        arr[i] = temp[j];
        j++;
    }
}
int main()
{
    int n = 7;
    int ar[] = {11,12,13,14,15,16,17};
    int d = 2;
    rotate1(ar,2,7);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
