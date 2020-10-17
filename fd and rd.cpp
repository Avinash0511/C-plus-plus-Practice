#include<bits/stdc++.h>
using namespace std;

void interestfd(double d, double ag, double a) {
    double rate, ans, anum;
    if(ag < 65) {
        if(d<3) rate=4.50;
        else if(d<6) rate=4.75;
        else if(d<9) rate=5.50;
        else if(d<12) rate=6.50;
        else if(d<48) rate=7.00;
        else if(d<=120) rate=8.00;
    }
    else if(ag >= 65) {
        if(d<3) rate=5.00;
        else if(d<6) rate=5.25;
        else if(d<9) rate=6.00;
        else if(d<12) rate=7.00;
        else if(d<48) rate=7.75;
        else if(d<=120) rate=8.50;
    }
    anum = d/12;
    ans = (a*rate*anum)/100.0;
    cout<<"Total gain after "<<d<<" months is: Rs. "<<ans<<"/-"<<endl;
    return;
}
void interestrd(double d, double ag, double a) {
    double rate, ans, anum;
    if(ag < 65) {
        if(d<3) rate=7.50;
        else if(d<6) rate=7.75;
        else if(d<9) rate=8.00;
        else if(d<12) rate=8.25;
        else if(d<48) rate=8.50;
        else if(d<=120) rate=9.00;
    }
    else if(ag >= 65) {
        if(d<3) rate=7.75;
        else if(d<6) rate=8.00;
        else if(d<9) rate=8.25;
        else if(d<12) rate=8.50;
        else if(d<48) rate=9.00;
        else if(d<=120) rate=9.50;
    }
    anum = d/12;
    ans = (a*(pow(1+(rate/100), anum)));
    cout<<"Total gain after "<<d<<" months is: Rs. "<<ans-a<<"/-"<<endl;
}
void tablefd(double amount)
{
    if(amount <= 10000000.0)
    {
        cout<<"Rate of FD Interest below Rs. 1 crore: "<<endl;
        cout<<setw(24)<<"\nMaturity Period"<<setw(12)<<"General"<<setw(12)<<"Senior Citizen"<<endl;
        cout<<setw(24)<<"1 month to 2 months"<<setw(12)<<"4.50"<<setw(12)<<"5.00"<<endl;
        cout<<setw(24)<<"3 months to 5 months"<<setw(12)<<"4.75"<<setw(12)<<"5.25"<<endl;
        cout<<setw(24)<<"6 months to 8 months"<<setw(12)<<"5.50"<<setw(12)<<"6.00"<<endl;
        cout<<setw(24)<<"9 months to 11 months"<<setw(12)<<"6.50"<<setw(12)<<"7.00"<<endl;
        cout<<setw(24)<<"12 months to 4 years"<<setw(12)<<"7.00"<<setw(12)<<"7.75"<<endl;
        cout<<setw(24)<<"5 years to 10 years"<<setw(12)<<"8.00"<<setw(12)<<"8.50"<<endl;
    }
    else if(amount > 10000000.0) {
        cout<<"Rate of FD Interest above Rs. 1 crore: "<<endl;
        cout<<setw(24)<<"\nMaturity Period"<<setw(12)<<"Interest Rates"<<endl;
        cout<<setw(24)<<"1 month to 2 months"<<setw(12)<<"6.50"<<endl;
        cout<<setw(24)<<"3 months to 5 months"<<setw(12)<<"6.75"<<endl;
        cout<<setw(24)<<"6 months to 8 months"<<setw(12)<<"6.75"<<endl;
        cout<<setw(24)<<"9 months to 11 months"<<setw(12)<<"8.00"<<endl;
        cout<<setw(24)<<"12 months to 4 years"<<setw(12)<<"8.50"<<endl;
        cout<<setw(24)<<"5 years to 10 years"<<setw(12)<<"10.00"<<endl;
    }
}
void tablerd(double amount) {
    cout<<"Rate of RD Interest:"<<endl;
    cout<<setw(24)<<"\nMaturity Period"<<setw(12)<<"General"<<setw(12)<<"Senior Citizen"<<endl;
    cout<<setw(24)<<"3 months"<<setw(12)<<"7.50"<<setw(12)<<"7.75"<<endl;
    cout<<setw(24)<<"6 months"<<setw(12)<<"7.75"<<setw(12)<<"8.00"<<endl;
    cout<<setw(24)<<"9 months"<<setw(12)<<"8.00"<<setw(12)<<"8.25"<<endl;
    cout<<setw(24)<<"12 months"<<setw(12)<<"8.25"<<setw(12)<<"8.50"<<endl;
    cout<<setw(24)<<"18 months"<<setw(12)<<"8.50"<<setw(12)<<"9.00"<<endl;
    cout<<setw(24)<<"24 years"<<setw(12)<<"9.00"<<setw(12)<<"9.50"<<endl;
}
void fd()
{
    double duration;
    double amount;
    double age;
    cout<<"Enter amount to deposit: "<<endl;
    cin>>amount;
    tablefd(amount);
    cout<<"\nEnter duration: (in months)"<<endl;
    cin>>duration;
    while(duration < 1 || duration > 120) {
        cout<<"Invalid Input"<<endl;
        cout<<"Enter duration: (in months)"<<endl;
        cin>>duration;
    }
    cout<<"Enter age: "<<endl;
    cin>>age;
    while(age < 18 || age > 125) {
        cout<<"Invalid Input"<<endl;
        cout<<"Enter age: "<<endl;
        cin>>age;
    }
    interestfd(duration,age,amount);
    //interestfd()
}
void rd() {
    double duration;
    double amount;
    double age;
    cout<<"Enter amount to deposit: "<<endl;
    cin>>amount;
    tablerd(amount);
    cout<<"\nEnter duration: (in months)"<<endl;
    cin>>duration;
    while(duration < 1 || duration > 120) {
        cout<<"Invalid Input"<<endl;
        cout<<"Enter duration: (in months)"<<endl;
        cin>>duration;
    }
    cout<<"Enter age: "<<endl;
    cin>>age;
    while(age < 18 || age > 125) {
        cout<<"Invalid Input"<<endl;
        cout<<"Enter age: "<<endl;
        cin>>age;
    }
    interestrd(duration,age,amount);
}

void menu()
{
    cout<<"MENU"<<endl;
    cout<<"1 - FD Calculator"<<endl;
    cout<<"2 - RD Calculator"<<endl;
    cout<<"3 - Exit"<<endl;
    cout<<"\nInput your choice: ";
}

int main()
{
    char n;
    do
    {
        menu();
        cin>>n;
        if(n=='1')
            fd();
        else if(n=='2')
            rd();
        else if(n=='3')
            exit(0);
        else
            cout<<"Invalid\n";
    }while(n!='3');

/*    int n;
    do
    {
        menu();
        cin>>n;
        if(isdigit(n))
        {
                continue;
        }
        else
        {
            n=0;
        }
        switch (n)
        {
            case 1: fd(); break;
            case 2: rd(); break;
            case 3:exit(0); break;
            default: cout<<"Invalid Input"<<endl;
        }
    }while(n != 3);
*/    return 0;
}
