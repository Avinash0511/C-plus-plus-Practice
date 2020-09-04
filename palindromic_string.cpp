#include<bits/stdc++.h>
using namespace std;

bool check(char ct[])
{
    int i=0, j=strlen(ct) - 1;
    while(i < j)
    {
        if(ct[i] == ct[j])
        {
            i++;
            j--;
        }
        else 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char ct[1000];
    cin.getline(ct, 1000);
    if(check(ct))
    {
        cout<<"Palindromic string"<<endl;
    }
    else
    {
        cout<<"Not palindromic string"<<endl;
    }
    return 0;
}
