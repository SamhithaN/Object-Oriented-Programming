#include<iostream>
#include<string.h>
using namespace std;

class bank
{
    char name[10],acctyp[10];
    int accnum;
    float balance;
    void display();
public:
    bank()
    {
        strcpy(name,"raja");
        strcpy(acctyp,"savings");
        accnum=1234551515;
        balance=1100.1;
    }

    void deposit();
    void withdraw();
};

void bank::deposit()
{
    cout<<"\nEnter deposit amount";
    float deposit;
    cin>>deposit;
    balance+=deposit;
    display();
}
void bank::withdraw()
{
    cout<<"\nThe current balance is"<<balance;
    cout<<"\nEnter withdrawal amount";
    float withdraw1;
    cin>>withdraw1;
    balance-=withdraw1;
    display();
}
void bank::display()
{
    cout<<"Name\tBalance"<<endl;
    cout<<name<<"\t"<<balance;
}

int main()
{
    bank c1;

    while(1)
    {
        cout<<"\nEnter choice:1- Withdraw,2-Deposit,3-Exit\t";
        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1: c1.withdraw();
            break;
        case 2: c1.deposit();
            break;
        case 3: exit(0);
            break;
        }
    }

    return 0;
}
