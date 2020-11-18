#include <iostream>

using namespace std;

class person
{
public:
    int p();
    int(person::*x)();
};
int person::p()
{
    return 1;
}

int main()
{
    person a;
    a.x=&person::p;
    cout << ((a.*(a.x))());
    return 0;
}
