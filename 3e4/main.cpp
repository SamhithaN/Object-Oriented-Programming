#include <iostream>

using namespace std;

float invest(int n,float p,float r)
{
   if(n==0)
       return p;

   return invest(n-1,p*(1+r),r);
}

int main()
{
    int n;
    float v,p,r;
    cout<<"Enter principal,rate and number of years";
    cin>>p>>r>>n;
    v=invest(n,p,r);
    cout<<"Value of investment "<<v;
    return 0;
}
