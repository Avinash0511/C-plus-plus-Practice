#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    char ct[1000];
    char large[10000];
    int len = 0, largest_len = 0;
    cin.get();  //to avoid "/n" from storing in the buffer at first place
    for(int i=0;i<=num;i++)
    {
        cin.getline(ct, 1000);
        len = strlen(ct);
        if(len > largest_len)
        {
            largest_len = len;
            strcpy(large, ct);
        }
    }
    cout<<largest_len<<" "<<large;
    return 0;
}



//input
/* 4
hello world
india vs pakistan
pubg is banned
tommorow is cap exam /*

//output 20 tommorow is cap exam
