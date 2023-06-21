#include<iostream>
#include<math.h>
using namespace std;
class cuboidClass{
int l,b,h;
public:
    cuboidClass(int x,int y,int z){
    l=x;b=y;h=z;
    }
    cuboidClass(){}
    void display(){
    cout<<endl<<"Dimension:"<<l<<"x"<<b<<"x"<<h;
    }
    int volume(){
    return l*b*h;
    }
};
int main()
{
    cuboidClass c(4,3,7);
    c.display();
    cout<<endl<<"Volume:"<<c.volume();
}
