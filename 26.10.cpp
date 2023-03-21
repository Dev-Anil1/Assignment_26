#include<iostream>
using namespace std;

class StaticCount
{
private:
    static int a;
public:
    void fun()
    {
        a++;
    }
    void display()
    {
        cout<<a<<endl;
    }
};

int StaticCount:: a;

int main()
{
    StaticCount s1,s2,s4;
    s1.fun();
    s2.fun();
    s4.fun();
    s4.display();

    return 0;
}
