#include<bits/stdc++.h>
using namespace std;

void spiral_print(int a[][1000], int r, int c)
{
	int startRow = 0;
	int startCol = 0;
	int endRow = r-1;
	int endCol = c-1;
	while(startRow <= endRow and startCol <= endCol)
	{
		//for printing first row
		for(int i=startCol;i<=endCol;i++)
		{
			cout<<a[startRow][i]<<" ";
		}
		startRow++;
		
		//for printing last column
		for(int i=startRow;i<=endRow;i++)
		{
			cout<<a[i][endCol]<<" ";
		}
		endCol--;
		
		//for printing last row
		if(startRow < endRow)
		{
			for(int i=endCol;i>=startCol;i--)
			{
				cout<<a[endRow][i]<<" ";
			}
			endRow--;
		}
		
		//for printing first column
		if(startCol < endCol)
		{
			for(int i=endRow;i>=startRow;i--)
			{
				cout<<a[i][startCol]<<" ";
			}
			startCol++;
		}
	}
}

int main()
{
	int arr[1000][1000] = {0}, i, j, row, col, val = 1;
	cout<<"Enter number of rows: ";
	cin>>row;
	cout<<"Enter number of columns: ";
	cin>>col;
	cout<<"Enter array elements: ";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr[i][j] = val;
			val ++;
		}
	}
	
	//Sprial print print array elements in spiral form
	
	spiral_print(arr, row, col);
	
	return 0;
}
