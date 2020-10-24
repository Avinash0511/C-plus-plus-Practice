#include<iostream>
using namespace std;
void swap(long int &n1, long int &n2)
{
	int t=n1;
	n1=n2;
	n2=t;
}
void gcd(long int &m, long int &n)
{
	long int r;
	if(m>n)
	{
		if(m%n==0)
		{
			cout<<"Greatest common divisor is:"<<n<<endl;
			if(n==1)
			{
				cout<<"Above given numbers are relatively prime."<<endl;
			}
		}
		else
		{
			r=m%n;
			gcd(n, r);
		}
	}
	else
	{
		swap(m,n);
		gcd(m,n);
	}
}
int main()
{
	long int a, b;
	cout<<"Enter two numbers to find their GCD: ";
	cin>>a>>b;
	gcd(a,b);
	return 0;
}
