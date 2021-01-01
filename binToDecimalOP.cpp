#include <iostream>
using namespace std;

int StrinChallenge(string strArr[], int arrLength)
{
    long long int num;
    num = stoi(strArr[0]);
    string temp;
    while(num)
    {
        temp += (num%2) + '0';
        num /= 2;
    }
    int si = temp.size();
    int count = 0;
    for(int i=si-1;i>=0;i--)
    {
        if(strArr[1][i] != temp[si-i-1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string A[] = {"5624","0010111111001"};
    int si = sizeof(A)/sizeof(A[0]);
    cout<<StrinChallenge(A,si);
}
