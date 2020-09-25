#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
        else if(i == n/2)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0 || j==n-1)
                {
                    cout<<"*"<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j==0 || j==n-1)
                {
                    cout<<"*"<<" ";
                }
                else if(j==i || j==n-i-1)
                {
                    cout<<"*"<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }
    }
}


/* * * * * * * * 
   * *       * * 
   *   *   *   * 
   *           * 
   *   *   *   * 
   * *       * * 
   * * * * * * * 
  Input will only be odd number. */
