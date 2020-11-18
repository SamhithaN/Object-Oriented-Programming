#include "temp.h"


int temp::getFar() const
{
    return far;
}

void temp::setFar()
{
    cout<<"enter far value"<<endl;
    cin>>far;
}

void temp::convert_to_cel()
{
    cout<<"in cel function"<<endl;
    int cel;
    cel=(far-32)*5/9;
    cout<<cel<<endl;
}
