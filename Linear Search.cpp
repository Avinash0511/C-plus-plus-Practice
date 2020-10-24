#include<iostream>
using namespace std;
int main() {
	int arr[1000] = {0}, ele, count=0;
	int n;
	cout<<"Number of elements: ";
	cin>>n;
	cout<<"Enter element to be searched: ";
	cin>>ele;
	cout<<"Enter the elements to be searched from: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++) {
		if(arr[i] == ele) {
			cout<<"Element found at position: "<<i<<endl;
			count++;
			break;
		}
	}
	if(!count){
		cout<<"Element not found."<<endl;
	}
	
	return 0;
}
