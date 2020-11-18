#include <iostream>

using namespace std;

int main()
{
    enum candidate{a,b,c,d,e};

    int count[5]={0};
    cout<<"Enter number of ballets";
    int n;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter chosen candidate";
        char val;
        cin>>val;
        switch(val)
        {
        case 'a':
            count[a]++;
            break;
        case 'b':
            count[b]++;
            break;
        case 'c':
            count[c]++;
            break;
        case 'd':
            count[d]++;
            break;
        case 'e':
            count[e]++;
            break;
        default: cout<<"Spoilt ballet"<<endl;
            break;
        }
    }
    for(int i=0;i<5;i++)
        cout<<"Number of candiate "<<char('a'+i)<<" votes:"<<count[i]<<endl;

    return 0;
}
