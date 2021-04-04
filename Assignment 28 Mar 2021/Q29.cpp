#include<iostream>
using namespace std;
class A
{
public:
    int x;
    A(int x)
    {
        this->x=x;
    }
};
int main()
{
    A main=4;
    cout<<main.x;
}
