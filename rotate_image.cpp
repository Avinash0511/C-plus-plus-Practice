#include<bits/stdc++.h>
using namespace std;

void rotate(int a[][1000], int s)
{
	for(int i=0;i<s;i++) //reverse each row
	{
		int start_col = 0;
		int end_col = s-1;
		while(start_col < end_col)
		{
			swap(a[i][start_col], a[i][end_col]);
			start_col++;
			end_col--;
		}
	}
	for(int i=0;i<s;i++) //transpose of this array after reversing
	{
		for(int j=0;j<s;j++)
		{
			if(i < j)
			{
				swap(a[i][j], a[j][i]);
			}
		}
	}
}

void rotate_stl(int a[][1000], int s)
{
	//same thing using STL::revers(start_container, end_container) method
	for(int i=0;i<s;i++)
	{
	    reverse(a[i], a[i]+s);
	}
	for(int i=0;i<s;i++) //transpose of this array after reversing
	{
		for(int j=0;j<s;j++)
		{
			if(i < j)
			{
				swap(a[i][j], a[j][i]);
			}
		}
	}
}

int main()
{
	int arr[1000][1000] = {0}, i, j, row, col;
	cout<<"Enter number of columns it will be same for rows: ";
	cin>>col;
	row = col;
	cout<<"\n \nEnter array elements: ";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"\n \nInput array is:\n"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//rotate(arr, col);
	rotate_stl(arr, col);
	
	cout<<"\n \n90 degree anti-clockwise of input array is:\n"<<endl;
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
