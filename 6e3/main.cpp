#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class book
{
    char author[10];
    char title[10];
    char publisher[10];
    double price;
    int stock;
public:
    book();
    void insertdata();
    void display();
    int search(char[],char[]);
    void nocopies(int);
};
book::book()
{
    price=0;
    stock=0;
}
void book::insertdata()
{
    cout<<"\n Enter the title of Book:";
    cin>>title;
    cout<<"\n Enter the name Of Author:";
    cin>>author;
    cout<<"\n Enter the name of Publisher:";
    cin>>publisher;
    cout<<"\n Enter the Price of book:";
    cin>>price;
    cout<<"\n Enter Stock of book:";
    cin>>stock;
}

void book::display()
{
    cout<<"\nTitle:"<<title<<"\tAuthor"<<author<<"\tPublisher"<<publisher<<"\nPrice:"<<price<<"\tStock:"<<stock;
}
int book::search(char t[],char a[])
{
    if(strcmp(title,t)&&(strcmp(author,a)))
    {
        if(stock==0)
            return 0;
        else
            return 1;
    }
    else
    {
        return 0;
    }
}

void book::nocopies(int num)
{
    if(stock>=num)
    {
        cout<<"\n Title is avilable";
        cout<<"\n Cost of"<<num<<"Books is Rs."<<(price*num);
        stock-=num;
    }
    else
    {
        cout<<"\n Required copies not in stock";
    }
}

int main()
{
    int ch,n,i,copies;
    book b[5];
    char key_title[10],key_author[10];

    do
    {
        cout<<"\n************Book Store*******************";
        cout<<"\n 1.Insert Details of book \n 2.Display \n 3.Search \n 4.Exit";
        cout<<"\n Enter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\n How many books data do you want to enter";
            cin>>n;
            for(i=0;i<n;i++)
            {
                b[i].insertdata();
            }
            break;

        case 2:
            for(i=0;i<n;i++)
            {
                cout<<"\n";

                b[i].display();
            }

            break;

        case 3:
            cout<<"\n Enter title of required book";
            cin>>key_title;
            cout<<"\n Enter author of required book";
            cin>>key_author;
            int flag;
            for(i=0;i<n;i++)
            {
                if(b[i].search(key_title,key_author))
                {
                    flag=1;
                    b[i].display();
                    break;

                }
            }
            if(flag==1)
                cout<<"\n Book is available";
            else
            {
                cout<<"\n Book is Not available";
                break;
            }
            if(flag==1)
            {
                cout<<"\n Please enter the required number of copies of the book";
                cin>>copies;
                b[i].nocopies(copies);
            }

            break;

        case 4: exit(EXIT_SUCCESS);
            break;

        }
    }while(ch<5);
    return 0;
}
