#include <iostream>
#include<math.h>
using namespace std;

int fact(int n)
{
    if(n==0||n==1)
        return 1;
    return (n*fact(n-1));

}

float sine(float sum,float x,int n)
{
    if(n==13)
        return sum;
    sum += (pow(x,n)/fact(n));
    return sine(sum,-x,n+2);
}

int main()
{
    float x,sum=0;
    int n=1;
    cout<<"Enter value of x";cin>>x;
    cout<<"The result is "<<sine(sum,x,n)<<endl;
    cout<<"Actual value is "<<sin(x)<<endl;
    return 0;
}
