#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Largest is \t";
    (num1>num2)?cout<<num1:cout<<num2;
    return 0;
}
