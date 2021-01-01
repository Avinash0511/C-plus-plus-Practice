#include <iostream>
using namespace std;

string stringChallenge(string str)
{
    int si=str.size();
    string ans;
    for(int i=si-1;i>=0;i--)
    {
        ans += str[i];
    }
    return ans;
}

int main()
{
    string st;
    getline(cin,st);
    cout<<stringChallenge(st);
}
