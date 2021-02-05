//Only values after point will be changed to fraction and it will be for non-recurring values

#include <bits/stdc++.h>
using namespace std;

void findFraction(string s)
{
    bool point=false;
    string before_deci="",after_deci="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '.')
        {
            point=true;
            continue;
        }
        if(point)
        {
            after_deci += s[i];
        }
        else
        {
            before_deci += s[i];
        }
    }
    
    int num_before_deci=0;
    int num_after_deci=stoi(after_deci);
    
    int temp1 = num_before_deci * pow(10,after_deci.size()) + num_after_deci;
    int temp2 = pow(10,after_deci.size());
    
    int gd = __gcd(temp1,temp2);
    
    int numerator = temp1/gd;
    int denominator = temp2/gd;
    
    cout<<numerator<<"/"<<denominator;
}

int main()
{
    float val;
    cin>>val;
    stringstream ss;
    ss << val;
    string s;
    ss>>s;
    cout<<(int)val<<" ";
    findFraction(s);
}
