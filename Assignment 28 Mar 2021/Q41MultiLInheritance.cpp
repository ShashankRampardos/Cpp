#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    SetA(int a)
    {
        x=a;
    }
    getA()
    {
        cout<<"x="<<x;
    }
};
class B:protected A
{
protected:
    SetB(int a)
    {
        SetA(a);
    }
public:
    getB()
    {
        getA();
    }

};
class C:public B
{
public:
    SetC(int a)
    {
        SetB(a);
    }
};
int main()
{
    C O;
    O.SetC(54);
    O.getB();
}

