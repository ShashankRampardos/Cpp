#include<iostream>
#include<math.h>
using namespace std;
int f(int);
class comp{

 private:double x,y;
 public:

    void input(int,int);

    void output();
    comp operator+(comp&);
    comp operator*(comp&);
    comp operator/(comp&);
    comp operator-(comp&);

};
int main()
{
 comp c1,c2;
c1.input(6,3);
c2.input(7,8);

//(c1.operator+(c2)).output();
(c1+c2).output();
cout<<endl;
(c1-c2).output();
cout<<endl;
(c1*c2).output();
cout<<endl;
(c1/c2).output();


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
comp comp::operator+(comp &c){
     comp c1;
     c1.x=c.x+x;
     c1.y=c.y+y;
     return c1;
}
inline comp comp::operator*(comp &c){
comp c1;
   c1.x=c.x*x-c.y*y;
   c1.y=c.x*y+c.y*x;
   return c1;
}
inline comp comp::operator/(comp &c){
    comp c1;
    c.y=-c.y;
   c1=operator*(c);
   double t=sqrt(c.x*c.x+c.y*c.y);
   //c1.output();
   c1.x=(c1.x)/t;
   c1.y=(c1.y)/t;
   //c1.output();
    return c1;
}
inline comp comp::operator-(comp &c){
comp c1;
c1.x=x-c.x;
c1.y=y-c.y;
return c1;
}
