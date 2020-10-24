#include<bits/stdc++.h>
using namespace std;
int main() {
	float a = 3.85448141;
	float *p = new float(a);
	cout<<*p<<" "<<setprecision(6)<<a<<" "<<int(*p)<<" "<<p<<endl;
	int *b = new int[10];
	b[0] = 11;
	b[1] = 4;
	b[2] = 5;
	b[3] = 7;
	cout<<*b<<" "<<&b[0]<<" "<<&b[1]<<endl;
	delete p;
	delete b;
	int c = 3 | 6 ^ 8 & 2; // (| means Bitwise-OR) & (^ mean Bitwise-XOR)
	cout<<c<<endl;
	double d = 3.0;
	cout<<setprecision(4)<<d<<endl;
	return 0;
}