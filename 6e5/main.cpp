#include <iostream>

using namespace std;

class prime
{
    int num;
public:
    prime()
    {
        cout<<"Enter number to be checked\t";
        cin>>num;
    }

    void check();
};

void prime::check()
{
    if(num==2)
    {
        cout<<"The number is prime\n";
        return;
    }

    int i,flag=0;
    for(i=2;i<num/2;i++)
    {
        if((num%i)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"The number is not prime\n";
    else
        cout<<"The number is prime\n";
}

int main()
{
    prime p;
    p.check();
    return 0;
}
