#include<iostream>
using namespace std;
void solve(int arr[50][50], int r, int c)
{
	for(int j=0;j<c;j++)
	{
		if(j%2 == 0)
		{
			for(int i=0;i<r;i++)
			{
				cout<<arr[i][j]<<", ";
			}
		}
		else
		{
			for(int i=r-1;i>=0;i--)
			{
				cout<<arr[i][j]<<", ";
			}
		}
	}
	cout<<"END";
}

int main() {
	int r,c;
	cin>>r>>c;
	int arr[50][50];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	solve(arr, r, c);
	return 0;
}





/* 
Input :
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44


Output:
11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
*/
