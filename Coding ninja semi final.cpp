#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string st[n];
    char c1[20];
    char c2[20];
    cin.get();
    for(int i=0;i<n;i++)
    {
        getline(cin, st[i]);
    }
    sort(st, st+n);
    int srt =0;
    int end = n-1;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cout<<st[i]<<endl;
    }
    while(srt < end)
    {
        strcpy(c1, st[srt].c_str());
        srt++;
        strcpy(c2, st[srt].c_str());
        srt--;
        for(int i=0;i<20;i++)
        {
            if(c1[i] == c2[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        srt++;
    }
    cout<<count;
}
