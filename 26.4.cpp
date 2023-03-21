#include<iostream>
using namespace std;

class Counter
{
private:
    static int count;
public:

    Counter()
    {
       cout<<++count;
       cout<<endl;
    }
};

int Counter::count;

int main()
{
    Counter a;
    return 0;
}
