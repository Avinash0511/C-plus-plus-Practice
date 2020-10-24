#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int s) {
	
	for(int i=0;i<s-1;i++) {
		
		int min_index = i;
		
		for(int j=i;j<s;j++) {
			if(a[j] < a[min_index])
				min_index = j;
		}
		swap(a[i], a[min_index]);
	}
}

int main() {
	int n, arr[1000];
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr, n);
	for(int i=n-1;i>=0;i--) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
