#include<bits/stdc++.h>
using namespace std;

class account {
    string str;
    int accnum;
    int type;
    int balance;
    public:
        void initialize() {
            cout<<"Enter name: "<<endl;
            cin>>str;
            cout<<"Enter account number: "<<endl;
            cin>>accnum;
            cout<<"Enter type: [1:Savings, 2:Current, 3:FD, 4:RD]"<<endl;
            cin>>type;
        }
        void depamt() {
            cout<<"Enter amount to deposit: "<<endl;
            cin>>balance;
        }
        void withdraw() {
            int temp;
            cout<<"The balance of this account is: "<<balance<<endl;
            cout<<"Enter amount to withdraw: "<<endl;
            cin>>temp;
            if(temp > balance) {
                cout<<"Insufficient balance"<<endl;
                withdraw();
            }
            else {
                balance -= temp;
                cout<<"Amount withdrawn. Left balance: "<<balance<<endl;
            }
        }
        void display() {
            cout<<"Name: "<<str<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

int main() {
    account a1,a2,a3;
    a1.initialize();
    a1.depamt();
    a1.display();
    a2.initialize();
    a2.depamt();
    a2.display();
    a3.initialize();
    a3.depamt();
    a3.display();
    a1.withdraw();
    a2.withdraw();
    a3.withdraw();
    return 0;
}
