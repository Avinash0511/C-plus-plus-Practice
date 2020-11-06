#include <iostream>
using namespace std;

void hours(int x, int y, int total)
{
    int t1, fleet, t2, temp;
    if(total%10 == 0)
    {
        fleet = total/10;
    }
    else
    {
        return;
    }
    
    if(x > y)
    {
        t1 = fleet/x;
        while(1)
        {
            t2 = fleet - (t1 * x);
            if(t2%y == 0)
            {
                temp = t2/y;
                break;
            }
            else
            {
                t1--;
            }
        }
    }
    else if(y > x)
    {
        temp = fleet/y;
        while(1)
        {
            t1 = fleet - (temp * y);
            if(t1%x == 0)
            {
                t1 = t1/x;
                break;
            }
            else
            {
                temp--;
            }
        }
    }
    else if(x==y)
    {
        if(fleet % x == 0)
        {
            t1 = fleet/x;
            t1 = t1/2;
            temp = t1;
        }
    }
    cout<<t1<<"\n"<<temp;
}

int main()
{
   int x, y, total;
   cin>>x>>y>>total;
   hours(x,y,total);
   
   return 0;
}


//fleet of cabs
