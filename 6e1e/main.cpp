#include <iostream>
using namespace std;

class DF;
class DM
{
    int meter=0;
    int centi;
public:
    DM(int meter,int centi)
    {
        meter+= centi/100;
        centi%=100;
    }

    void display();
    friend void add(DF , DM);
};

class DF
{
    int feet=0;
    int inch;
public:
    DF(int feet,int inch)
    {
        feet+= inch/12;
        inch=inch%12;
    }

    void display();
    friend void add(DF , DM);
};

void DF::display()
{
    cout<<"Feet"<<feet<<"Inches"<<inch;
}
void DM::display()
{
    cout<<"Meter"<<meter<<"Centimeter"<<centi;
}

void add(DF l1,DM l2)
{
    int ch;
    cout<<"\nPress 1 for meter-centi:";
    cout<<"\nPress 2 for feet-inch:";
    cout<<"\nEnter your choice:";
    cin>>ch;
    if(ch==1)
    {
        DM res(0,0);
        int res1 = (l2.meter*100 + l2.centi + l1.feet*30.48 + l1.inch*2.54);
        res.meter = res1/100;
        res.centi= res1%12;
        res.display();
    }

    else if(ch==2)
    {
        DF res(0,0);
        int res1 = (l2.meter*39.37 + l2.centi*.3937008 + l1.feet*12 + l1.inch);
        res.feet = res1/12;
        res.inch = res1%12;
        res.display();
    }
}

int main()
{
    int meter,centi;
    cout<<"Enter meter and cm";
    cin>>meter>>centi;
    DF l1(meter,centi);

    int feet,inch;
    cout<<"Enter feet and inches";
    cin>>feet>>inch;
    DM l2(feet,inch);

    add(l1,l2);
    cout<<"\n";return 0;
}
