#include<iostream>

using namespace std;

class student
{
private :
    int roll_no;
    long long mobno;
    string sname,city;
public:
    student(int a,long long b,string s,string d)
    {
        roll_no=a;

        mobno=b;

        sname=s;

        city=d;

    }

    void Display()
    {
        cout<<roll_no<<endl;

        cout<<mobno<<endl;

        cout<<sname<<endl;

        cout<<city<<endl;

    }
};

int main()
{
    student s(31,8083088252,"Anil","Gorakhpur");
    s.Display();
    return 0;

}
