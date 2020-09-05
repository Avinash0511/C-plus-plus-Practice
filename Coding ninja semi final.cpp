/* Can you count ranking lists?
Send Feedback
Master Hulk has decided to rank his students again. This time, he wants his list to also be aesthetically pleasant, so he has decided that similar names (those beginning with the same letter or sequence of letters) must be close to one another on the list. Therefore, he has devised the following rule:
For every two names on the list that begin with the same letter sequence, all names between them on the list must also begin with that letter sequence.
For example, consider the names MARTHA and MARY (characters from a beautiful story). They both begin with the sequence MAR, so names beginning with the same sequence (like MARCO and MARVIN) can appear in between (but not MAY, for example).
Notice that the lexicographically sorted ordering always satisfies this rule, but it is by no means the only valid ordering. Your task is determining how many different orderings satisfy the rule, i.e. how many options teacher Herkabe has for his ranking list.
Input Format:
The first line of input contains the positive integer N, the number of names.
Each of the following N lines contains a single name: a sequence of between 1 and 3000 (inclusive) uppercase English letters. The names are distinct and given in no particular order.
Constraints:
3 ≤ N ≤ 3000
2<=|S| <=20 (length of string)
Time limit: 1 sec
Output Format:
The first and only line of output must contain the required number of possible ranking lists, modulo 1000000007.
Sample Input 1:
3
IVO
JASNA
JOSIPA
Sample Output 1:
4
Sample Input 2;
5
MARICA
MARTA
MATO
MARA
MARTINA
Sample Output 2:
24 */


#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string st[n];
    char c1[20];
    char c2[20];
    cin.get();
    for(int i=0;i<n;i++)
    {
        getline(cin, st[i]);
    }
    sort(st, st+n);
    int srt =0;
    int end = n-1;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cout<<st[i]<<endl;
    }
    while(srt < end)
    {
        strcpy(c1, st[srt].c_str());
        srt++;
        strcpy(c2, st[srt].c_str());
        srt--;
        for(int i=0;i<20;i++)
        {
            if(c1[i] == c2[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        srt++;
    }
    cout<<count;
}
