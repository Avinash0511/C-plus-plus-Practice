/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the 
seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
SAMPLE INPUT 
2
18
40
SAMPLE OUTPUT 
19 WS
45 AS
Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
/*

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
	int a, t1, temp;
	temp = n%6;
	a = n/6;
	if(n%6==0 && a%2!=0) {
		t1 = abs(~n);
		cout<<t1<<" "<<"WS"<<endl;
	}
	else if(n%6==0 && a%2==0) {
		t1 = (a-2)*6 + 1;
		cout<<t1<<" "<<"WS"<<endl;
	}
	else {
		if(a%2 == 0) {
			t1 = (6-temp) + (((a+1)*6)+1);
		}
		else if(a%2 != 0) {
			t1 = (((a-1)*6)+1) + (6-temp);
		}
		if(temp == 1) {
			cout<<t1<<" "<<"WS"<<endl;
		}
		else if(temp == 2 || temp == 5) {
			cout<<t1<<" "<<"MS"<<endl;
		}
		else if(temp == 3 || temp == 4) {
			cout<<t1<<" "<<"AS"<<endl;
		}
	}
}

int main() {
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++) {
		cin>>n;
		solve(n);
	}
}
