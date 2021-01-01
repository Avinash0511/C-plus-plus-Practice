#include <iostream>
using namespace std;

int checkPassword(char c[],int n)
{
    int ch=0,num=0,cap=0;
    if(isdigit(c[0]))
        return 0;
    for(int i=0;i<n;i++)
    {
        if(c[i] ==  32 || c[i] == 47 || c[i] == 92)
            return 0;
        if(c[i] >= 33 && c[i] <= 126)
            ch++;
        if(c[i] >= 65 && c[i] <= 90)
            cap++;
        if(isdigit(c[i]))
            num++;
    }
    if(num >= 1 && cap >= 1 && ch >= 4)
        return 1;
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    char c[n];
    for(int i=0;i<n;i++)
    {
        cin.get(c[i]);
    }
    cout<<checkPassword(c,n);
}
