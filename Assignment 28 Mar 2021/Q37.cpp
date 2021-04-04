#include<iostream>
using namespace std;
class A
{
public:
    int x;
    int y;
    A(int a,int b)
    {
        x=a;y=b;

    }

};
int main()
{
    A O(34,56);
    cout<<O.x<<" "<<y;
}
