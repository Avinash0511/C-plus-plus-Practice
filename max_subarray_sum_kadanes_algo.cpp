#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, arr[1000] = {0}, currsum=0, maxsum=0;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++) 
	{
		cin>>arr[i];
	}
	
	//kadane's algo to find subarray sum in O(n) complexity
	
	for(int i=0;i<n;i++)
	{
		currsum = currsum + arr[i];
		maxsum = max(maxsum, ((currsum < 0) ? currsum = 0 : currsum ));
	}
	
	cout<<"Maximum subarray sum is: "<<maxsum;
	return 0;
}
