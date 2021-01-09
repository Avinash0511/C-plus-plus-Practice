#include <stdio.h>
using namespace std;

int factorialAns(int x, int arr[], int arrSize)
{
    int temp=0, ans;
    for(int i=0;i<arrSize;i++)
    {
        ans = arr[i] * x + temp;
        arr[i] = ans % 10;
        temp = ans/10;
    }
    while(temp)
    {
        arr[arrSize] = temp%10;
        temp = temp/10;
        arrSize++;
    }
    return arrSize;
}

void factorial(int num)
{
    int arr[200];
    arr[0] = 1;
    int arrSize = 1;
    for(int i=2;i<=num;i++)
    {
        arrSize = factorialAns(i,arr,arrSize);
    }
    for(int i=arrSize-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main() {
	int testCases;
	scanf("%d",&testCases);
	while(testCases--)
	{
	    int num;
	    scanf("%d",&num);
	    if(num <= 1) printf("1\n");
	    else
	    {
	        factorial(num);
	    }
	}
	return 0;
}
