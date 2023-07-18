#include<iostream>
using namespace std;
class A{
public:
int a;
void fa(){
cout<<"from A";
}
};
class B1:virtual public A{
public:
    int b1;
    fb1(){
    cout<<"from B1";
    }
};
class B2:virtual public A{
public:
    int b2;
    void fb2(){
    cout<<"from B2";
    }
};
class C:public B1,public B2{
public:
    int c;
    void fc(){
    cout<<"from C";
    }
};
int main(){
C c;
c.fa();
c.a=0;
cout<<c.a;
}
