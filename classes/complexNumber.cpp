#include<iostream>
#include<math.h>
using namespace std;
int f(int);
class comp{

 private:double x,y;
 public:

    void input(int,int);

    void output();
    comp add(comp&);
    comp multiply(comp&);
    comp divide(comp&);
    comp subtract(comp&);

};
int main()
{
 comp c1,c2;
c1.input(6,3);
c2.input(7,8);
(c1.add(c2)).output();
cout<<endl;
(c1.subtract(c2)).output();
cout<<endl;
(c1.multiply(c2)).output();
cout<<endl;
(c1.divide(c2)).output();


}
int f(int n){
if(n==0)
    return 1;
return n*f(n-1);
}

inline void comp::input(int a,int b){
       x=a;y=b;
}

inline void comp::output(){

   if(y==1||y==-1)
    y==1?cout<<"complexNumber:"<<x<<"+i"<<endl:cout<<"complexNumber:"<<x<<"-i"<<endl;
    else if(y==0)
        cout<<"complexNumber:"<<x;
   else
    y>0?cout<<"complexNumber:"<<x<<"+"<<y<<"i"<<endl:cout<<"complexNumber:"<<x<<y<<"i"<<endl;
//cout<<x<<" "<<y<<endl;
}
inline comp comp::add(comp &c){
     comp c1;
     c1.x=c.x+x;
     c1.y=c.y+y;
     return c1;
}
inline comp comp::multiply(comp &c){
comp c1;
   c1.x=c.x*x-c.y*y;
   c1.y=c.x*y+c.y*x;
   return c1;
}
inline comp comp::divide(comp &c){
    comp c1;
    c.y=-c.y;
   c1=multiply(c);
   double t=sqrt(c.x*c.x+c.y*c.y);
   //c1.output();
   c1.x=(c1.x)/t;
   c1.y=(c1.y)/t;
   //c1.output();
    return c1;
}
inline comp comp::subtract(comp &c){
comp c1;
c1.x=x-c.x;
c1.y=y-c.y;
return c1;
}

