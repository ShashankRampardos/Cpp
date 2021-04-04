#include<iostream>
using namespace std;
class A
{
    int x,y;
    add()
    {
        return x+y;
    }
public:
    A(){x=1;y=1;}
    displayAdd()
    {cout<<add();}

};
int main()
{
    A O;
    O.displayAdd();
}
