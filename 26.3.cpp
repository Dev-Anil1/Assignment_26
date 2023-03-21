#include<iostream>
using namespace std;

class Cube
{
private:
    int side;
public:
    Cube(int a)
    {
        side=a;
    }

    int calculateVolume()
    {
        return side*side*side;
    }
};

int main()
{
    Cube c(5);
    cout<<"Volume is "<<c.calculateVolume()<<endl;
    return 0;

}
