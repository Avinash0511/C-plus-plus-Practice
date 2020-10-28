#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s[5] = {"India","Australia","Malaysia","Japan","America"};
    int arr[5] = {0};
    vector<int> val;
    while(cin>>t)
    {
        val.push_back(t);
    }
    for(int i=0;i<val.size();i++)
    {
        switch(val[i])
        {
            case 1: arr[0]++; break;
            case 2: arr[1]++; break;
            case 3: arr[2]++; break;
            case 4: arr[3]++; break;
            case 5: arr[4]++; break;
        }
    }
    int m=0;
    t=arr[0];
    for(int i=1;i<5;i++)
    {
        if(t < arr[i])
        {
            m=i;
            t=arr[i];
        }
    }
    cout<<s[m]<<endl;
    for(int i=0;i<5;i++)
    {
        if(m != i && t == arr[i])
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}





/*
Input:
1
2
2
1
3
5
1
1
2
1
1
5
4
1
5
5
5
5
5
5
1
2
2
2
2
2


Output:
India
Australia
America

*/
