#include<iostream>
using namespace std;

void process(string input)
{
    //cout<<input;
    int days = stoi(input);
    if(days < 7)
    {
        if(days == 1)
        {
            cout<<days<<" day";
        }
        else
        {
            cout<<days<<" days";
        }
    }
    else
    {
        int weeks = days/7;
        days = days%7;
        if(weeks==1 && days == 0)
        {
            cout<<weeks<<" week";
        }
        else if(weeks==1 && days == 1)
        {
            cout<<weeks<<" week + "<<days<<" day";
        }
        else if(weeks==1 && days > 1)
        {
            cout<<weeks<<" week + "<<days<<" days";
        }
        else
        {
            cout<<weeks<<" weeks + "<<days<<" days";
        }
    }
}

int main()
{
    string num;
    getline(cin,num);
    process(num);
}
