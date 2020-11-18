#include <iostream>

using namespace std;

int main()
{
    int i=5;
    while(i)
    {
        switch(i)
        {
        default:
        case 4: cout<<i;
        case 5: cout<<i;

            break;

        case 1:
            cout<<i;
            break;

        case 2:cout<<i;
        case 3:cout<<i;
            break;
        }
        i--;
        cout<<endl;
    }
    return 0;
}




