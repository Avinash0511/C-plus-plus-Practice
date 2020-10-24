#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[1000] = {0}, k, sum=0;
	
	//Given a sorted array, find pair of elements that sum to K(Given)
	
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++) 
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	
	cout<<"Enter sum element for which you want to search for pairs: ";
	cin>>k;
	
	i=0;
	int j=n-1;
	
	cout<<"Two pairs are:"<<endl;
	while(i<j)
	{
		sum = arr[i] + arr[j];
		if(sum > k)
		{
			j--;
		}
		else if(sum < k)
		{
			i++;
		}
		else if(sum == k)
		{
			cout<<arr[i]<<","<<arr[j]<<endl;
			i++;
			j--;
		}
	}
	return 0;
}
