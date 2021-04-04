#include<iostream>
using namespace std;
class A
{
public:
    int x;
    int *y=new int;
    A(int a,int b)
    {
        x=a;*y=b;

    }
    ~A()
    {
        delete y;
        cout<<"\ny pointer Memory released";
    }
};
int main()
{
    A O(34,56);
    cout<<O.x<<endl;
}
