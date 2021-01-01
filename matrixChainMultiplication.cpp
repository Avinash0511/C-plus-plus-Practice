#include <bits/stdc++.h>
using namespace std;

int ArrayChallenge(int arr[], int i, int j)
{
	if (i == j)
    {
        return 0;
    }
	int mini = INT_MAX;
	int count;
	for (int k = i; k < j; k++)
	{
		count = ArrayChallenge(arr, i, k) + ArrayChallenge(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
		if (count < mini)
        {
            mini = count;
        }
	}
	return mini;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 3 };
	int si = sizeof(arr) / sizeof(arr[0]);
	cout <<ArrayChallenge(arr, 1, si - 1);
}
