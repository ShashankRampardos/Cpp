#include<iostream>
using namespace std;
class A
{   public:
    int x:16;
    int y:16;
    A(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
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
    A o(23,45);
    cout<<sizeof(o);
    cout<<endl<<o.x<<" "<<o.y;
}
