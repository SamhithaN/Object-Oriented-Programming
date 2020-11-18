#include <iostream>
#include<math.h>
using namespace std;


float power(double m, int n=2);
int main()
{
    double m,p;int n;
    cout<<"Enter values of m and n"<< endl;
    cin>>m>>n;
    cout<<"Result is";
    if(n==2)
        p=power(m);
    else
        p=power(m,n);
    cout<<p<<endl;
    return 0;
}
inline float power(double m, int n)
{
    return pow(m,n);
}
