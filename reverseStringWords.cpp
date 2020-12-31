#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string line;
    getline(cin,line);
    int size = line.size();
    string ans;
    int count=0;
    for(int i=size-1;i>=0;i--)
    {
        if(line[i] != ' ' && i>0)
        {
            count++;
            
        }
        else if(i == 0)
        {
            ans += line.substr(i,count+1);
        }
        else
        {
            ans += line.substr(i+1,count);
            ans += ".";
            count=0;
        }
    }
    cout<<line<<endl;
    cout<<ans;
}



/*
world is my country

output:
country.my.is.world
*/
