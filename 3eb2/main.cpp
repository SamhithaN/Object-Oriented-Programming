#include <iostream>

using namespace std;
void insert(int a[],int m)
{
    for(int i=0;i<m;i++)
    {
        cin>>*(a+i);
    }
}
void display(int b[],int m)
{
    for(int i=0;i<m;i++)
    {
        cout<<*(b+i)<<"\t";
    }
}

int main()
{
    int m;
    cout<<"Enter M value";
    cin>>m;
    int *p= new int [m];
    if(!p)
        cout<<"Memory not allocated";
    else
        cout<<"Memory allocated"<<endl;
    cout<<"Enter elements";
    insert(p,m);
    display(p,m);



    return 0;
}
