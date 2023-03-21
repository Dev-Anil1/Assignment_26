#include<iostream>

using namespace std;

class Box
{
private :
    int ln,b,ht;
public :
    Box(int a,int b,int g)
    {
        ln=a;
        b=b;
        ht=g;
    }

    int volume()
    {
        return ln*b*ht;
    }

};

int main()
{
    Box a(1,4,5);
    cout<<a.volume();

    return 0;
}
