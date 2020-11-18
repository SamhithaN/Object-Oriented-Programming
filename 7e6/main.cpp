#include <iostream>

using namespace std;

class complex
{
    float real,img;
public:
    complex()
    {
        cout<<"Enter complex: real and imaginary number";
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+ i"<<img;
    }

    void operator!();
    complex operator+(complex);
};
void complex::operator!()
{
    real=-real;
    img=-img;
}
complex complex::operator +(complex two)
{
    complex temp;
    temp.real = real + two.real;
    temp.img = img + two.img;
    return temp;
}

int main()
{
    complex c1,c2;
    !c1;
    !c2;
    complex c3 = c1 + c2;
    c3.display();
}
