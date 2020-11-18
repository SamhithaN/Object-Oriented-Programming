#include <iostream>

using namespace std;

int main()
{
    cout << "Enter number" << endl;
    int n;
    cin>> n;
    for (int i=1;1<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j;
        cout<<endl;
    }


    return 0;
}
