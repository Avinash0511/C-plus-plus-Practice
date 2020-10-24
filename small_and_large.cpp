#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[1000], n, large = INT_MIN, small = INT_MAX;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter "<<n<<" array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	/*
	for(int i=0;i<n;i++){
		if(arr[i] > large) {
			large = arr[i];
		}
		if(arr[i] < small) {
			small = arr[i];
		}
	}  
	*/
	for(int i=0;i<n;i++) {
		large = max(large, arr[i]);
		small = min(small, arr[i]);
	}
	cout<<"Largest element is: "<<large<<"\nSmallest element is: "<<small<<endl;
	return 0;
}
