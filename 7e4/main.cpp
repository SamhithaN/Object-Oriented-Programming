#include <iostream>

using namespace std;

class stringcmp
{
    char str[10];\
public:
    stringcmp()
    {
        cout<<"Enter string\t";
        cin>>str;
    }
    bool operator==(stringcmp);
    bool operator>(stringcmp);
};
bool stringcmp::operator ==(stringcmp s2)
{
    for(int i=0;(str[i]=!'\0')||(s2.str[i]=!'\0');i++)
        if(str[i]!=s2.str[i])
            return 0;
    return 1;
}
bool stringcmp::operator >(stringcmp s2)
{
    for(int i=0;(str[i]=!'\0')||(s2.str[i]=!'\0');i++)
        if(str[i]>s2.str[i])
            return 1;
    return 0;
}

int main()
{
    stringcmp S1,S2;
    if(S1==S2)
        cout<<"Strings are equal";
    else if(S1>S2)
        cout<<"S1 comes alphabetically before S2";
    else
        cout<<"S2 comes alphabetically before S1";
    return 0;
}
