#include <iostream>

using namespace std;

class account
{
protected:
    char name[10],acctyp[10];
    int accnum;
    float balance;
public:
    void get();
    void put();
};
void account::get()
{
    cout<<"\nEnter name";
    cin>>name;
    cout<<"Enter acctyp";
    cin>>acctyp;
    cout<<"Enter accnum";
    cin>>accnum;
    cout<<"Enter current balance";
    cin>>balance;
}
void account::put()
{
    cout<<"Name:"<<name;
    cout<<"Acctyp:"<<acctyp;
    cout<<"Accnum:"<<accnum;
    cout<<"Current balance:"<<balance;
}
//----------------------------------------------------------
class cur_acct: public account //cheque book
{
protected:
    float deposit_amt;
    void display()
    {
        cout<<"\nCurrent account balance is "<<balance;
    }
public:
    void deposit();
};

void cur_acct::deposit()
{
    cout<<"\nEnter deposit";
    cin>>deposit_amt;

    balance+=deposit_amt;

    display();
}
//------------------------------------------------------------------
class sav_acct:public account //interest and withdrawal
{
protected:
    float cmpint=.06,withdrawal;
    void display()
    {
        cout<<"\nSavings account balance is "<<balance;
    }
public:
    void compute_int();
    void withdraw();
    void check_bal();
};
void sav_acct::compute_int()
{
    int year;
    cout<<"\nEnter number of years account is present";
    cin>> year;

    balance+= cmpint*year*balance;

    display();
}
void sav_acct::withdraw()
{
    cout<<"\nEnter amount to be withdrawn";
    cin>>withdrawal;

    balance-=withdrawal;

    display();

    check_bal();
}
void sav_acct::check_bal()
{
    if(balance<=500)
    {
        cout<<"\nSavings account below 500, penalty must be paid of 25";
        balance-=25;
        display();
    }
}

//-----------------------------------------------------------------
int main()
{

    sav_acct s1;
    cur_acct c1;

    cout<<"\nEnter savings account info";
    s1.get();

    cout<<"\nEnter current account info";
    c1.get();

    int ch;

    while(1)
    {
        cout<<"\nEnter choice: 1-Deposit 2-Withdraw 3-Add interest";
        cin>>ch;
        switch(ch)
        {
        case 1: c1.deposit();
            break;
        case 2: s1.withdraw();
            break;
        case 3: s1.compute_int();
            break;
        default:exit(0);
        }
    }
}
