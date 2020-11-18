#include <iostream>

using namespace std;
void inter(int &,int &);

int main()
{
    int a=10,b=20;
    inter(a,b);
    cout<<"a="<<a<<"\t"<<"b="<<b;
    return 0;
}
void inter(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
