#include <iostream>
using namespace std;

class staff
{
protected:
    int code;
    char name[20];
public:
    staff()
    {
        cout<<"\nEnter name and code\n";
        cin>>name>>code;
    }
    virtual void show ()
    {
        cout<<"\nName:"<<name<<"\nCode:"<<code;
    }
};

class teacher:public staff
{
protected:
    char subj[20];
    char publication[20];
public:
    teacher()
    {
        cout<<"\nEnter teacher's subject and publication\n";
        cin>>subj>>publication;
    }
    void show()
    {
        cout<<"\nName:"<<name<<"\nCode:"<<code;
        cout<<"\nSubject:"<<subj<<"\nPublication:"<<publication;
    }

};

class officer:public staff
{
protected:
    int grade;
public:
    officer()
    {
        cout<<"\nEnter officer grade\n";
        cin>>grade;
    }
    void show()
    {
        cout<<"\nName:"<<name<<"\nCode:"<<code;
        cout<<"\nOfficer grade:"<<grade;
    }
};

class typist:public staff
{
protected:
    float speed;
public:
    typist()
    {
        cout<<"\nEnter typist speed\n";
        cin>>speed;
    }
    void show()
    {
        cout<<"\nName:"<<name<<"\nCode:"<<code;
        cout<<"\nSpeed:"<<speed;
    }
};

class regular:public typist
{
public:
    regular()
    {
        cout<<"\nName:"<<name<<"\nCode:"<<code;
        cout<<"\nSalary per annum is 1 lakh inclusive of 25 holidays";
    }
};

class casual: public typist
{
private:
    int daily_wages;
public:
    void casual1()
    {
        cout<<"\nEnter daily wage\n";
        cin>>daily_wages;
    }
    void show()
    {
        cout<<"\nName:"<<name<<"\nCode:"<<code;
        cout<<"\nDaily wage for casual typist is\t"<<daily_wages;
    }
};

void teacher_deets()
{
    teacher t1;
    t1.show();
}
void typist_deets()
{
    int ch;
    cout<<"\nEnter if typist is 1.Regular 2.Casual\t";
    cin>>ch;
    if(ch==2)
    {
        casual c1;
        c1.show();
    }
    else
    {
        regular r1;
    }
}
void officer_deets()
{
    officer o1;
    o1.show();
}

int main()
{
    int ch;
    while(1)
    {
        cout<<"\nSelect: 1.Teacher 2.Typist 3.Officer\t";
        cin>>ch;
        switch(ch)
        {
        case 1:teacher_deets();
            break;
        case 2:typist_deets();
            break;
        case 3:officer_deets();
            break;
        default:exit(0);
        }
    }
}

