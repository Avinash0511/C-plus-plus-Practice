#include <iostream>
using namespace std;

int findGCD(int num1, int num2)
{
    if(num1>num2)
    {
        num1 = num1 - num2;
        findGCD(num1,num2);
    }
    else if(num1<num2)
    {
        num2 = num2-num1;
        findGCD(num1,num2);
    }
    else
    {
        return num1;
    }
}

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("GCD of two numbers %d and %d is: %d",n1,n2,findGCD(n1,n2));
}
