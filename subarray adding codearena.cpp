#include<bits/stdc++.h>
using namespace std;

void answer(long long int x, long long int y, long long int n)
{
	long long int arr[n-1] = {0}, start, temp=0, index=0;
	for(int i=0;i<n;i++)
	{
		if(i<x)
		{
			arr[i] = y;
			temp += y;
		}
		else
		{
			arr[i] = temp;
			temp -= arr[index];
			temp += arr[i];
			index++;
		}
	}
	cout<<arr[n-1]<<endl;
}

int main()
{
	long long int t,x,y,n;
	cin>>t;
	while(t>0)
	{
		cin>>x>>y>>n;
		answer(x,y,n);
		t--;
	}
	return 0;
}
