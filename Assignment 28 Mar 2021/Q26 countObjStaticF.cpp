#include<iostream>
using namespace std;
class A
{
    int x;
    static int counto;

public:
    A()
    {
        counto++;
    }
static void counter()
    {
        cout<<"Number of objects created:"<<counto;
    }

};
int A::counto=0;
//static void A::counter()


int main()
{
    A o1,o2,o3;
    A::counter();

}
