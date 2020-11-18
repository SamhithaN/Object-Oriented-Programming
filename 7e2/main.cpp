#include <iostream>
#include <math.h>
using namespace std;

class polar
{
    float x,y;
public:
    polar(float rad,float ang)
    {
        x = rad*cos(ang);
        y = rad*sin(ang);
    }
    polar operator+(polar);
    friend ostream & operator<<(ostream &,polar);
};

polar polar::operator+(polar two)
{
    polar temp(0,0);
    temp.x = x+ two.x;
    temp.y = y+ two.y;
    return temp;
}

ostream & operator<<(ostream & dout,polar b)
{
    dout<<"Radius"<< sqrt(b.x*b.x + b.y*b.y)<<endl;
    dout<<"Angle"<< atan(b.y/b.x)<<endl;

    return dout;
}

int main()
{
    float rad,ang;

    cout<<"Enter p1 radius and angle(radians)";
    cin>>rad>>ang;
    polar p1(rad,ang);

    cout<<"Enter p2 radius and angle(radians)";
    cin>>rad>>ang;
    polar p2(rad,ang);

    polar p3=p1+p2;

    cout<<"Summation of p1 and p2 is\t"<<p3;

    return 0;
}
