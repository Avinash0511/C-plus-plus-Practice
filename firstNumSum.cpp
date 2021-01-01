#include <iostream>
using namespace std;

string ArrayChallenge(int arr[], int arrLength)
{
    if(arrLength <= 3)
    {
        return "false";
    }
    else if(arrLength == 4)
    {
        int sum = arr[0];
        if(sum == arr[1] + arr[2] + arr[3])
        {
            return "true";
        }
        else
        {
            return "false";
        }
    }
    else
    {
        int i=1,j=arrLength-1,sum=arr[0];
        bool check = false;
        while(i-1<j)
        {
            int k = arr[i] + arr[i+1] + arr[j];
            if(sum == k)
            {
                check = true;
                return "true";
                i++;
                j--;
            }
            else if(sum > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        if(check == false)
        {
            return "false";
        }
    }
}

int main()
{
    int A[] = {12,3,1,-5,-4,7};
    int si = sizeof(A)/sizeof(A[0]);
    cout<<ArrayChallenge(A,si);
}
