#include <iostream>

using namespace std;

class s_c_int
{
    float p,r;
    int t;
public:
    void accept()
    {
        cout<<"\nEnter principal,rate,time";
        cin>>p>>r>>t;
    }
    void ci();
    friend void si(s_c_int);
};

void si(s_c_int M)
{
    s_c_int *pc = &M;
    float s_c_int:: *pp= &s_c_int::p;
    int s_c_int:: *pt= &s_c_int::t;

    float interest = ((M.*pp) * (pc->*pt) * (pc->r))/100;
    cout<<"\nThe si is "<<interest;
}
void s_c_int:: ci()
{
    cout<<"\nThe ci is"<<p*pow((1+ r/100),t);

}

int main()
{
    s_c_int si1,ci1;

    void (s_c_int::*pf)()= &s_c_int :: accept;
    s_c_int *op = &si1;
    (op->*pf)();
    si(si1);

    ci1.accept;
    ci1.ci;

    return 0;
}
