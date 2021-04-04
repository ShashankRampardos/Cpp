//constructor Overloading
#include<iostream>
using namespace std;
class A
{
public:
    int x,y;
    A(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    A(A *X)
    {
        x=X->x;
        y=X->y;
    }
    A()
    {
        x=0;y=0;
    }
    A(int x)
    {
        this->x=x;
        this->y=0;
    }
};
int main()
{
    A O(4,5),O1(O),O2,O3(2);
    //O1=O;
    cout<<O.x<<" "<<O1.y;

}
