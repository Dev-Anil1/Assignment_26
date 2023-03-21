#include<iostream>
using namespace std;

class Time
{
private:
    int hr,mn,sc;
public:

    void setTime(int a,int b,int d)
    {
        hr=a;
        mn=b;
        sc=d;
    }

    void normalize()
    {
        hr=hr+mn/60;
        mn=mn%60;
        mn=mn+sc/60;
        sc=sc%60;
    }

    Time add(Time t)
    {
        Time temp;
        temp.hr=hr+t.hr;
        temp.mn=mn+t.mn;
        temp.sc=sc+t.sc;
        temp.normalize();
        return temp;
    }

    void showTime()
    {
        cout<<hr<<":"<<mn<<":"<<sc<<endl;
    }
};

int main()
{
    Time t1,t2,t4;
    t1.setTime(11,75,80);
    t2.setTime(22,45,66);
    t4=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t4.showTime();
    return 0;
}
