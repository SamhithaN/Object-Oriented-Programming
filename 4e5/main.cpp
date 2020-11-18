#include <iostream>
using namespace std;

#define max(a,b,c) a>b?(a>c?a:c):(b>c?b:c)
int main()
{
    int z,a,b,c;
    cout << "Enter three numbers" << endl;
    cin>>a>>b>>c;
    z=max(a,b,c);
    cout<<"The largest is"<<z;
    return 0;
}
