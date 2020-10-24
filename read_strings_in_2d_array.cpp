#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c[100][1000];
	cout<<"Input number of strings: ";
	cin>>n;
	cin.get(); //to consume extra inputs after n number of strings
	cout<<"Enter strings:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin.getline(c[i], 1000); //delimiter is back slash by default
	}
	cout<<"Entered strings are:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
