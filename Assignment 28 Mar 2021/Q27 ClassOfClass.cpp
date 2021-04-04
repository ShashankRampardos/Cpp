#include<iostream>
using namespace std;
class B
{  public:
    int y=0;
};

class A
{
    B obj;
    int x;

public:
    void fun()
    {
        cout<<obj.y;
    }
};
int main()
{
    A main;
    main.fun();
}
