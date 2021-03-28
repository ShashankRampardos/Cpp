#include<iostream>
using namespace std;
void f(int*);
void g(int&);
int h(int);
int main()
{
    int a=5,b=3,c=2;
    f(&a);
    cout<<a<<endl;
    g(b);
    cout<<b<<endl;
    cout<<h(c);
}
void f(int *x)
{
    *x*=*x;
}
void g(int &x)
{
    x*=x;
}
int h(int x)
{
    x*=x;
    return x;
}
