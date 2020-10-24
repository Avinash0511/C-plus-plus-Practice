#include<bits/stdc++.h>
using namespace std;

void staircase(int a[][1000], int s, int elmt) //staircase searching
{
    int smallest = a[0][0], largest = a[s-1][s-1];
    int start_row = 0;
    int end_col = s-1;
    if(s == 0 || elmt < smallest || elmt > largest)
    {
        cout<<"\nElement is out of bound or the array doesn't exist."<<endl;
    }
    while(start_row < s && end_col >= 0) //searching starts from first row and last column
    {
        if(a[start_row][end_col] == elmt)
        {
            cout<<"\nElement "<<elmt<<" is found at position ("<<start_row<<","<<end_col<<")"<<endl;
            break;
        }
        if(a[start_row][end_col] > elmt)
        {
            end_col--;
        }
        else
        {
            start_row++;
        }
    }
    if(start_row == s && end_col < 0)
    {
        cout<<"\nElement not found"<<endl;
    }
}

//Array should be sorted along row and column
int main()
{
	int arr[1000][1000] = {0}, i, j, row, col, ele;
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
	cout<<"\n \nEnter element to search: ";
	cin>>ele;
	
	cout<<"\n \nInput array is:\n"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	staircase(arr, col, ele);
	
	return 0;
}
