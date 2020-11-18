#include <iostream>

using namespace std;

class person
{
protected:
    string name;
    int code;
};

class account:virtual public person
{
protected:
    int pay;
};

class admin: public virtual person
{
protected:
    int exper;
};

class master:public account,public admin
{
public:
    static int num;
    void display();
    void create();
    void friend update(master* );
    int check()
    {
        cout<<"Enter employee's code(current) to update";
        int empid;
        cin>>empid;
        for(int i=1;i<=num;i++)
        {
            if((this+i)->code==empid)
                return i;
        }
        cout<<"Employee doesn't exist";
        return 0;
    }
    ~master();
};
int master::num;
void master::create()
{
    cout<<"\nEnter name\t";
    cin>>name;
    cout<<"\nEnter code\t";
    cin>>code;
    cout<<"\nEnter experience\t";
    cin>>exper;
    cout<<"\nEnter pay\t";
    cin>>pay;
}
void master::display()
{
    for(int i=1;i<=num;i++)
    {
        cout<<i<<".\n";
        cout<<"Name:"<<(this+i)->name;
        cout<<"\nCode:"<<(this+i)->code;
        cout<<"\nExperience:"<<(this+i)->exper;
        cout<<"\nPay:"<<(this+i)->pay;
        cout<<"\n\n";
    }
}


void update(master* m)
{
    int i = m->check();

    if(i)
    {
        int ch;
        while(1)
        {
            cout<<"\nSelect field to update: 1.Name 2.Code 3.Experience 4.Pay \t";
            cin>>ch;
            switch(ch)
            {
            case 1:
                cout<<"Enter employee's name";
                cin>>(m+i)->name;
                break;
            case 2:
                cout<<"Enter employee's code";
                cin>>m[i].code;
                break;
            case 3:
                cout<<"Enter employee's experience";
                cin>>m[i].exper;
                break;
            case 4:
                cout<<"Enter employee's pay";
                cin>>m[i].pay;
                break;
            default:return;
            }
        }
    }
}

int main()
{
    master *m;
    m=new master[10];
    int ch;

    while(1)
    {
        cout<<"\nSelect: 1.Create 2.Update 3.Display\t";
        cin>>ch;
        switch(ch)
        {
        case 1:
            m[++(master::num)].create();
            break;
        case 2:
            update(m);
            break;
        case 3:
            m->display();
            break;
        default:exit(0);
        }
    }
}
