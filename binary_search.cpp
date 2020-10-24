#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[], int s, int k) {
	int start = 0, end = s-1, mid;
	while(start <= end) {
		mid = (start + end)/2;
		if(a[mid] == k){
			return mid;
		}
		if(a[mid] > k){
			end = mid-1;
		}
		if(a[mid] < k){
			start = mid+1;
		}
	}
	return -1;
}
int main() {
	int arr[1000], n, key;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter element you want to search: ";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int result = binary_search(arr, n, key);
	if(result == -1){
		cout<<"Element not found.";
	}
	else{
		cout<<"Element found at index "<<result;
	}
	return 0;
}
