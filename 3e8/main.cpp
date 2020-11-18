#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    cout << "X";
    for(float k=0.0;k<1;k+=0.1)
        cout<<"     "<<k;
    for(float i=0;i<10;i++)
    {
        cout<<i;
        for(float j=0.1;j<1;j+=0.1)
            cout<<"     "<<exp(-(i+j));
        cout<<endl;
    }
    return 0;
}
