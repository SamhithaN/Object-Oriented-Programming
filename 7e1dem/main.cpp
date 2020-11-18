#include <iostream>

using namespace std;

class FLOAT
{
    float x;
public:
    FLOAT(float in)
    {
        x=in;
    }

    void operator-(FLOAT);
    void operator+(FLOAT);
    friend void operator*(FLOAT,FLOAT);
    void operator/(FLOAT &y);
    friend ostream & operator<<(ostream & dout, FLOAT & b);

};

FLOAT FLOAT:: operator-(FLOAT two)
{
    FLOAT temp(0);
    temp.x = x-two.x;
    return temp;
}

FLOAT FLOAT:: operator+(FLOAT two)
{
    FLOAT temp(0);
    temp.x = x + two.x;
    return temp;
}

FLOAT operator*(FLOAT one,FLOAT two)
{
    FLOAT temp(0);
    temp.x = one.x*two.x;
    return temp;
}

FLOAT FLOAT::operator/(FLOAT &y)
{
    FLOAT temp(0);
    temp.x = x/y.x;
    return temp;
}
ostream & operator<<(ostream & dout, FLOAT & b)
{
    dout<< b.x;
    cout<<endl;
    return (dout);
}

int main()
{

    float z;
//    cout<<"Enter value of f1\t";
//    cin>>z;
    FLOAT f1(3.2);
//    cout<<"Enter value of f2\t";
//    cin>>z;
    FLOAT f2(2.3);

    FLOAT f3=f1-f2;
    cout<<"Subtraction \t"<<f3;

    f3=f1+f2;
    cout<<"Addition \t"<<f3;

    f3=f1*f2;
    cout<<"Multiplacation \t"<<f3;

    f3=f1/f2;
    cout<<"Division \t"<<f3;

    return 0;
}
