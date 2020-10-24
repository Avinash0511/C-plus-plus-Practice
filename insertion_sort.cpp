#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int s)
{
	int ele, j;
	for(int i=1;i<=s-1;i++)
	{
		ele = a[i];
		j=i-1;
		while(j>=0 and a[j] > ele)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = ele; 
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
	
	insertion_sort(arr, n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
