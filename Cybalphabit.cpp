/*In the new world, we also have a new system called Cybalphabit system. 
The system assigns points to each Latin lowercase alphabet as follows:- 'a' is assigned 20 , 'b' is assigned 21, 'c' 22 and so on. Thus, finally 'z' is assigned 225 points.

A Cyberstring is a sequence of lowercase Latin alphabets.

Now, the total score of a Cyberstring will be the sum of points of its characters. You will be given two integers N and K. Construct a Cyberstring X of length N with total score K or print −1 if it is not possible to form the Cyberstring (X). If there are multiple answers, print any.

INPUT:
First line contains T, the number of test cases.
Each of the next T lines denotes a different test case :
The (i+1)th line denotes the ith test case, and contains two integers N and K, the length of the string that is to be constructed, and the score of the string respectively.

OUTPUT:
For each test case, provide the output on a different line.
Output the required string X, if one exists, otherwise output −1.

Constraints:-
1≤T≤105
1≤n≤105
1≤k≤5∗107
The sum of n over all test cases is less than 105

Sample Input:
4
2 2
2 5
4 5
3 2

Expected Output:
aa
ac
baaa
-1
Explanation:
In the first test case, n=2 and k=2. So,we have to construct a string of length 2 with total score 2. 
It can be easily seen that the only possible string is "aa". Its total score will be equal to 20+20=2.
In the second case, "ac" will have score 20+22=5. Obviously, "ca" will also have the same score and is also a possible answer.
In the fourth test case, it can be shown that there is no possible string which satisfies the conditions. */


#include <iostream>
#include <cmath>
using namespace std;

int power(int n, int p = 0)
{
    int temp,i=0;
    for(;i<26;i++)
    {
        temp = pow(2,p);
        if(temp == n || temp > n)
        {
            break;
        }
        p++;
    }
    return i-1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d%d",&n,&k);
	    if(k < n)
	    {
	        printf("-1\n");
	    }
	    else if(k==n)
	    {
	        string st;
	        for(int i=0;i<k;i++)
	        {
	            st += (char)97;
	        }
	        cout<<st<<endl;
	    }
	    else
	    {
	        int high = power(k);
	        string st;
	        //printf("%d\n",high);
	        while(n>0)
	        {
	            if(k-pow(2,high) >= n-1)
	            {
	                n--;
	                st += (char)(97+high);
	                k = k - pow(2,high);
	            }
	            else
	            {
	                high = high-1;
	            }
	        }
	        if(k==0)
	        {
	            cout<<st<<endl;
	        }
	        else
	        {
	            printf("-1\n");
	        }
	        
	    }
	}
	return 0;
}


