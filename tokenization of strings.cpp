#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100] = "Today is a rainy day";
	char *ptr = strtok(s, "r");
	cout<<ptr<<endl;
	ptr = strtok(NULL, " "); //strtok stores a static array which stores previously passed string if new string is not provided in next function call
	cout<<ptr<<endl;

	return 0;
}