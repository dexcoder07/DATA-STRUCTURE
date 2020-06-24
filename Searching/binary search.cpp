#include<iostream>
using namespace std;
int main()
{
	int n,e,loc=0;
	cout<<"Enter the size of the array:";
	cin>>n;
	int ar[n];
	cout<<"Enter the array in ascending order:";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int beg=ar[0],end=ar[n-1],mid=0;
	mid=int((mid+end)/2);
	cout<<"Enter the element:";
	cin>>e;
	while(beg<=end)
	{
		if(e>ar[mid])
		{
			beg=mid+1;
		}
		else if(e==ar[mid])
		{
			loc=mid;
			cout<<"Element found at:"<<loc+1;
			break;
		}
		else if (e<ar[mid])
		{
			end=mid-1;
		}
		mid=int(beg+end)/2;
	}
	return 0;
}
