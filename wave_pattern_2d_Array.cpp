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
	
	//Wave print
	
	for(j=0;j<col;j++)
	{
		if(j%2 == 0)
		{
			for(i=0;i<row;i++)
			{
				cout<<arr[i][j]<<" ";
			}
		}
		else
		{
			for(i=row-1;i>=0;i--)
			{
				cout<<arr[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}
