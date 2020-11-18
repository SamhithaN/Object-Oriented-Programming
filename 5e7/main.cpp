#include <iostream>

using namespace std;

class faculty
{
    char name[10],ID[10],post[10],address[10];
    int quali;
public:
    void getdata();
    void display();
};

void faculty::getdata()
{
    cout<<"Enter Id";cin>>ID;
    cout<<"Enter name";cin>>name;
    cout<<"Enter post";cin>>post;
    cout<<"Enter address";cin>>address;
    cout<<"Enter quali";cin>>quali;
}
void faculty::display()
{
    cout<<"\nId"<<ID;
    cout<<"\nname"<<name;
    cout<<"\npost"<<post;
    cout<<"\naddress"<<address;
    cout<<"\nquali"<<quali;

}

int main()
{
    int n;
    cout<<"Enter no of employees";cin>>n;
    faculty emp[n];
    for(int i=0;i<n;i++)
    {
        emp[i].getdata();
        emp[i].display();
    }

    return 0;
}
