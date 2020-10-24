#include <bits/stdc++.h>
using namespace std;

void alphaToPos(string st)
{
  int l = st.length(), k;
  int capA = 'A', smaa = 'a', temp;
  cin>>k;
  vector<int> v;
  char c[l+1];
  strcpy(c, st.c_str());
  for(int i=0;i<l;i++)
  {
    if(c[i] >= 97 && c[i] <= 122)
    {
      temp = c[i] - smaa + 1;
      v.push_back(temp);
    }
    else if(c[i] >= 65 && c[i] <= 90)
    {
      temp = c[i] - capA + 1;
      v.push_back(temp);
    }
    else if(c[i] == ' ')
    {
      temp = -1;
      v.push_back(temp);
    }
  }
  for(int i=0;i<l;i++)
  {
    cout<<v[i];
  }
}

int main()
{
  string st;
  getline(cin, st);
  alphaToPos(st);
  return 0;
}