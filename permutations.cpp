**Chef has a number N, Cheffina challenges the chef to check the divisibility of all the permutation of N by 3. 
If any of the permutations is divisible by 3 then print 1 else print 0.

Input:
First-line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers N.
Output:
For each test case, output in a single line answer 1 or 0.

Constraints
1≤T≤10^6
1≤N≤10^6

Sample Input:
2
18
308

Sample Output:
1
0**




#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,temp[7],i=0,j,num=0;
	    bool check = false;
	    scanf("%d",&n);
	    while(n)
	    {
	        temp[i] = n%10;
	        n/=10;
	        i++;
	    }
	    sort(temp,temp+i);
	    do
	    {
	        num=0;
	        for(j=0;j<i;j++)
	        {
	            num = temp[j] + num * 10;
	        }
	        //printf("%d\n",num);
	        if(num%3 == 0)
	        {
	            printf("1\n");
	            check = true;
	            break;
	        }
	    }
	    while(next_permutation(temp,temp+i));
	    if(check == false)
	    {
	        printf("0\n");
	    }
	}
	return 0;
}
