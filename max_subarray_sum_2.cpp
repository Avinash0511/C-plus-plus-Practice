#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, arr[1000] = {0}, cumSum[1000] = {0};
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	cin>>arr[0];
	cumSum[0] = arr[0];
	for(int i=1;i<n;i++) 
	{
		cin>>arr[i];
		cumSum[i] = cumSum[i-1] + arr[i]; //storing cummulative sum or can also called precomputing sum
	}
	
	int curr_sum = 0, max_sum = 0;
	int left = 0, right = 0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			curr_sum = 0;
			curr_sum = cumSum[j] - cumSum[i-1];
			if(curr_sum > max_sum)
			{
				max_sum = curr_sum;
				left = i;
				right = j;
			}
		}
	}
	
	cout<<"Maximum subarray sum is: "<<max_sum<<endl;
	for(int i=left;i<=right;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
