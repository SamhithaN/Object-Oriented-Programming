#include <iostream>
#include<string.h>
using namespace std;

class String
{
    char word[20];
public:
    String()
    {
        word[0]='\0';
    }
    String(char *s)
    {
        strcpy(word,s);
    }
    void friend concat(String ,String);
};
void concat(String s,String p)
{
    int i;
    String s3;
    s3=s;
    for(i=0;i<strlen(p.word);i++)
    {
        s3.word[i+strlen(s.word)]=p.word[i];
    }
    s3.word[i+strlen(s.word)]='\0';
    cout<<s3.word;
}
int main()
{
    cout << "Enter word" << endl;
    char word[20];
    gets(word);
    String s1(word);
    String s2("nice day");
    concat(s1,s2);
    return 0;
}
