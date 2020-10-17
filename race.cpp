/*

Milestone: 42.195
Input distance covered:
42.195
42.195
42.195
30.1
33.2
41.2
40.6
41.9
42.1
15.6
36.1
0.01

Output should be top three performers except the finishers:
42.1 41.9 41.2

*/


#include <bits/stdc++.h>
using namespace std;

void chek(vector<double> gt) {
    int l = gt.size(), j=0;
    double ans[3];
    sort(gt.rbegin(), gt.rend());
    for(int i=0;i<l;i++) {
        if(gt[i] != 42.195) {
            ans[j] = gt[i];
            j++;
        }
        if(j == 3) {
            break;
        }
    }
    for(int i=0;i<j;i++) {
        cout<<ans[i]<<" ";
    }
}

int main()
{
   vector<double> gt;
   double n;
   bool chk = false;
   while(cin>>n) {
       if(n <= 0.0 || n > 42.195) {
           chk = true;
           break;
       }
       else {
           gt.push_back(n);
       }
   }
   if(!chk) {
       chek(gt);
   }
   else {
       cout<<"Invalid Input"<<endl;
   }
   return 0;
}
