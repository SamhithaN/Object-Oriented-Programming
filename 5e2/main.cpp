#include <iostream>

using namespace std;
const int size=3;
class vector
{
    float a[size];
public:
    void create();
    void modify();
    void multiply_scalar();
    void display();
};

void vector::create()
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter vector"<<i+1<<"value";
        cin>>a[i];
    }
}
void vector::modify()
{
    float value;
    cout<<"Enter vector value";
    cin>>value;
    for(int i=0;i<size;i++)
    {
        if(a[i]==value)
        {
            cout<<"Enter modified value";
            cin>>a[i];
            return;
        }
    }
    cout<<"Element not present";
}
void vector::multiply_scalar()
{
    unsigned int scal;
    float value;
    cout<<"\nEnter vector value to perform multiplacation operation";
    cin>>value;
    for(int i=0;i<size;i++)
    {
        if(a[i]==value)
        {
            cout<<"Enter scalar value to be multiplied";
            cin>>scal;
            a[i]*=scal;
            return;
        }
    }
    cout<<"Element not present";

}
void vector::display()
{
    for(int i=0;i<size;i++)
    {
        cout<<"\nvector"<<i+1<<"value="<<a[i];
    }
}

int main()
{

    vector v;
    while(1)
    {
        printf("\nEnter choice 1-create,2-Modify,3-Multiply by scalar,4-Display");
        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1:
            v.create();
            break;
        case 2:
            v.modify();
            break;
        case 3:
            v.multiply_scalar();
            break;
        case 4:
            v.display();
            break;
        default: exit(0);

        }
    }
    return 0;
}
