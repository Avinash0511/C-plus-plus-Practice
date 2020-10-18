#include <iostream>

using namespace std;

int multiplyNumbers(int n1, int n2, int n3) {
    int res, mid, max, min;
    if(n1==n2 && n1==n3) {
        res = n1*n2;
    }
    min = (n1<n2)?((n1<n3)?n1:n3):((n2<n3)?n2:n3);
    max = (n1>n2)?((n1>n3)?n1:n3):((n2>n2)?n2:n3);
    mid = (n1+n2+n3) - (min+max);
    res = max*mid;
    return res;
}

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    cout<<multiplyNumbers(n1,n2,n3);
    return 0;
}
