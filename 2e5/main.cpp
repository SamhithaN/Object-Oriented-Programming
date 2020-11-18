#include <iostream>

using namespace std;

int main()
{
    float far;
    cout << "Enter temp in farenheit" << endl;
    cin>>far;
    cout<<"In celsius"<<(far-32)*5/9;
    return 0;
}
