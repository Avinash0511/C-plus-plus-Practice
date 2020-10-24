#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1000][1000] = {0}, i, j, row, col;
	cout<<"Enter number of rows: ";
	cin>>row;
	cout<<"Enter number of columns: ";
	cin>>col;
	cout<<"Enter array elements: ";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"The 2d array is:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
