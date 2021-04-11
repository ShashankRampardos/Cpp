///Simple Inheritance Sample
#include<iostream>
using namespace std;
class A
{
private:
   int x;
public:
   A()
   {
       x=4;
   }

   Set(int a)
   {
       x=a;
   }
   get()
    {
        cout<<x<<endl;
    }
};
class B:public A
{
public:
    setD(int a)
    {
        Set(a);
    }

};
int main()
{
    B OB;
    OB.get();
    OB.setD(3);
    OB.get();

}
