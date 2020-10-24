#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, arr[1000];
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++) 
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++) //from i to j (range is used here)
			{
				cout<<arr[k]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
