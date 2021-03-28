#include<iostream>
using namespace std;
class A
{   public:
    int x;
    int y;

  inline void in(int,int);
  inline void out();
};
void A::in(int a,int b)
{
    x=a;
    y=b;
}
void A::out()
{
    cout<<"x="<<x<<"y="<<y;
}
int main()
{
    A o;
    int a,b;
    cin>>a>>b;
    o.in(a,b);
    o.out();

}
