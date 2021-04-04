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
};
int main()
{
    A O(4,5);
    cout<<O.x<<" "<<O.y;

}
