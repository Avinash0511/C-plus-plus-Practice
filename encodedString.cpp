#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum = 0;
	    string s="";
	    for(int i=1;i<=n/4;i++)
	    {
	        char n1,n2,n3,n4;
	        cin>>n1>>n2>>n3>>n4;
	        sum = ((n1 - '0')*8) + ((n2 - '0')*4) + ((n3 - '0')*2) + ((n4 - '0')*1);
	        s += sum + 'a';
	    }
	    cout<<s<<endl;
	}
	return 0;
}
