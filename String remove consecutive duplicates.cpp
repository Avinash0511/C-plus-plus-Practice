#include<bits/stdc++.h>
using namespace std;

void removeDuplicates( char a[])
{
    int len = strlen(a);
    if(len==1 or len==0)
    {
        return;
    }
    int prev = 0;
    for(int curr = 1;curr<len;curr++)
    {
        if(a[curr] != a[prev])
        {
            prev++;
            a[prev] = a[curr];
        }
    }
    a[prev+1] = '\0';
}

int main()
{
    char ct[1000];
    cin.getline(ct, 1000);
    removeDuplicates(ct);
    cout<<ct;
    return 0;
}


//input giittthhuuubbbbb AAAAvviiinnnaassshhh
//output github Avinash
