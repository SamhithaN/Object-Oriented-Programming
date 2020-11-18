#include <iostream>

using namespace std;

class mat
{
    int row;
    int col;
    int a[10][10];
public:
    void getdata()
    {
        cout<<"Enter no of rows and columns";
        cin>>row>>col;
        for(int i=0;i<row;i++)
        {
            cout<<"Enter row"<<i+1<<"Values";
            for(int j=0;j<col;j++)
                cin>>a[i][j];
        }
    }
    void display()
    {
        for(int i=0;i<row;i++)
        {
            cout<<"\n";
            for(int j=0;j<col;j++)
                cout<<a[i][j]<<"\t";
        }
    }
    friend mat multiply(mat ,mat);
};

mat multiply(mat m1, mat m2)
{
    mat m3;
    if(m1.col==m2.row)
    {
        m3.row=m1.row;
        m3.col=m2.col;

        for(int i=0;i<m1.row;i++)
            for(int j=0;j<m2.col;j++)
            {
                m3.a[i][j]=0;
                for(int k=0;k<m1.col;k++)
                    m3.a[i][j]+=m1.a[i][k]*m2.a[k][j];
            }
    }
    return m3;
}


int main()
{
    mat m1,m2,m3;
    m1.getdata();
    m1.display();
    m2.getdata();
    m2.display();
    m3 = multiply(m1,m2);
    m3.display();
    return 0;
}
