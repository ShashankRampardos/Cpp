#include<iostream>
using namespace std;
class A
{
public:
    const int x;
    int &y;
    int z;
    A(int c,int &a,int b):x(c),y(a)
    {
        z=b;
    }
};
int main()
{
    int n=5;
    A O(4,n,5);
    cout<<O.x<<O.y<<O.z;
}
