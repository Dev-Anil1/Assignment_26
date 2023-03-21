#include<iostream>
using namespace std;

class Date
{
private:
    int dd,mm,yy;
public:
    Date(int a,int f,int r)
    {
        dd=a;mm=f;yy=r;
    }

    void display()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
};

int main()
{
    Date d(25,11,2026);
    d.display();
    return 0;
}

