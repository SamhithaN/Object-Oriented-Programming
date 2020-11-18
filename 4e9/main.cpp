#include <iostream>

using namespace std;
#define pi 3.14
float area(int height, int base);
float area(int radius);
int main()
{
    int h,b,r;
    cout<<"Enter heught and base lenght of triangle";
    cin>>h>>b;
    cout<<"Area of triangle="<<area(h,b);
    cout << "Enter radius of circle" << endl;
    cin>>r;
    cout<<"Area of circle="<<area(r);
    return 0;
}
float area(int height, int base)
{
    return 0.5*height*base;
}
float area(int radius)
{
    return pi*radius*radius;
}
