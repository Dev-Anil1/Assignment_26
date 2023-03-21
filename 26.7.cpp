#include<iostream>
using namespace std;

class Bank
{
private:
    int principal,time;
    float roi,si;
public:
    Bank(int p,int t,float r)
    {
        principal=p;

        time=t;

        roi=r;

    }

    void calculateSi()
    {
        si=principal*roi*time/100;
    }

    void Display()
    {
        cout<<si<<endl;
    }
};

int main()
{
    Bank s(10000,2,19);
    s.calculateSi();
    s.Display();
    return 0;

}
