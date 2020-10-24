#include<bits/stdc++.h>
using namespace std;

class matrix
{
    int **p;
    int x,y;
public:
    matrix(int d1, int d2);
    void getelement(int i, int j, int value)
    {
        p[i][j] = value;
    }
    void display(void);
    int & putelement(int i, int j)
    {
        return p[i][j];
    }
};

matrix :: matrix(int d1, int d2)
{
    x = d1;
    y = d2;
    p = new int *[d1];
    for(int i=0;i<d1;i++)
    {
        p[i] = new int[d2];
    }
}

void matrix :: display(void)
{
    int m,n;
    for(m=0;m<x;m++)
    {
        for(n=0;n<y;n++)
        {
            cout<<p[m][n]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int m, n;
    cout<<"Enter size of matrix:"<<endl;
    cin>>m>>n;
    matrix A(m,n);
    cout<<"Enter matrix elements:"<<endl;
    int value;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>value;
            A.getelement(i,j,value);
        }
    }
    cout<<"\n";
    A.display();
    cout<<"\n";
    cout<<A.putelement(1,2);

    return 0;
}
