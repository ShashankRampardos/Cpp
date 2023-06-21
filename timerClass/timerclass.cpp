#include<iostream>
#include<math.h>
using namespace std;
class timer{
private:
    short h,m,s;
public:
    timer(int h,int m,int s){
    this->h=h;
    this->m=m;
    this->s=s;
    }
    timer(){}
    void input(int x,int y,int z){
     s=z%60;
     m=z/60+y%60;
     h=m/60;
     m=m%60;
     h=h+y/60+x;
    }
    void display(){
    cout<<h<<":"<<m<<":"<<s;
    }
};
int main()
{
 timer t(0,0,0);
 t.input(1,63,3600);
 t.display();
}


