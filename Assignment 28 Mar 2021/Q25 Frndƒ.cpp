#include<iostream>

using namespace std;
class A;
class B;

class A
{
    int x;

public:

friend void f(A,B);
   A(int a)
    {
        x=a;
    }

};
class B
{
    int x;
    friend void f(A,B);
public:
    B(int a)
    {
        x=a;
    }

};
void f(A x,B y)
{
    cout<<"a+b:"<<x.x+y.x;
}
int main()
{
    A a(10);
    B b(20);

    f(a,b);

    return 0;
}
