#include <iostream>
#include<math.h>
using namespace std;

int power(int m,int n);
float power(double m, int n=2);

int main()
{
    double m,p;
    int n;
    cout<<"Enter values of m and n"<< endl;
    cin>>m>>n;
    cout<<"Result is ";
    if(n==2)
        p=power(m);
    else
        p=power(m,n);
    cout<<p<<endl;
    return 0;
}
float power(double m, int n)
{
    return pow(m,n);
}
int power(int m, int n)
{
    return pow(m,n);
}
