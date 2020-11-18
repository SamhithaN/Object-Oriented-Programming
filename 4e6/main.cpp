#include <iostream>

using namespace std;

int max(int,int,int);
int main()
{
    int z,a,b,c;
    cout << "Enter three numbers" << endl;
    cin>>a>>b>>c;
    z=max(a,b,c);
    cout<<"The largest is"<<z;
    return 0;
}
inline int max(int a,int b,int c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
