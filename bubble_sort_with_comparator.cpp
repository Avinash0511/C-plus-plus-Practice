#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
	return a>b;
}

//passing function as parameter

void bubble_sort(int a[], int s, bool (&cmp)(int a, int b)) 
{	
	for(int i=0;i<s-1;i++) 
	{
		for(int j=s-2;j>=i;j--)
		{
			if(cmp(a[j], a[j+1]))
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
	
	bubble_sort(arr, n, compare);
	
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
