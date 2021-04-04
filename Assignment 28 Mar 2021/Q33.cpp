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
    /*OR
    A(A &X)
    {
        x=X.x;
        y=X.y;
    }*/
};
int main()
{
    A O(4,5),O1(O);
    //O1=O;
    cout<<O.x<<" "<<O1.y;

}
