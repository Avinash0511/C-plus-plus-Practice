#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int s) 
{	
	for(int i=0;i<s-1;i++) 
	{
		for(int j=s-2;j>=i;j--)
		{
			if(a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main()
{
	int n, arr[1000];
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	bubble_sort(arr, n);
	
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
