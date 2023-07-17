#include<iostream>
#include<math.h>
using namespace std;
class timer{
private:
    short h,m,s;
public:
    timer(int h,int m,int s){
//    this->h=h;
//    this->m=m;
//    this->s=s;
this->input(h,m,s);
    }

    timer(){}

    timer normalize(int x,int y,int z){
     timer t;
    // cout<<endl<<x<<" "<<y<<" "<<z;
     t.s=z%60;
     t.m=z/60+y%60;
     t.h=t.m/60;
     t.m=t.m%60;
     t.h=t.h+y/60+x;
     return t;
    }

      timer input(int x,int y,int z){
   h=x;m=y;s=z;
   *(this)=normalize(h,m,s);
   return *this;
    }

    void display(){
    cout<<h<<":"<<m<<":"<<s;
    }

   timer operator+(timer &t){
    timer tmp;
    tmp.s=s+t.s;
    tmp.m=tmp.s/60;
    tmp.s%=60;
    tmp.m=tmp.m+t.m+m;
    tmp.h=tmp.m/60;
    tmp.m%=60;
    tmp.h=tmp.h+h+t.h;
    return tmp;
    }
//   timer operator-(timer &t){
//    timer tmp;
//    tmp.s=s-t.s;
//    tmp.m=tmp.s/60;
//    tmp.s%=60;
//    tmp.m=tmp.m-t.m-m;
//    tmp.h=tmp.m/60;
//    tmp.m%=60;
//    tmp.h=tmp.h-h-t.h;
//    return tmp;
//    }
    operator>(timer &t){
    if(h>t.h)
        return 1;
    else if(m>t.m)
            return 1;
    else if(s>t.s)
        return 1;
    else
        return 0;
    }
   int operator ==(timer &t){
      if(t.h==h&&t.m==m&&t.s==s)
        return 1;
      else
        return 0;
    }
  timer operator !(){
    if(m==0&&h==0&&s==0)
        h=1;
    else{
        h=0;m=0;s=0;
         }
         return *this;
    }
    timer operator++(){
       return input(h,m,++s);
    }


    timer operator++(int){
        input(h,m,++s);
    return normalize(h,m,--s);
    }

friend ostream& operator<<(ostream&,timer&&);
friend ostream& operator<<(ostream&,timer&);
friend istream& operator>>(istream&,timer&&);
friend istream& operator>>(istream&,timer&);


//   friend timer operator++(timer&);
//   friend timer operator++(timer&,int);


};
    ostream& operator <<(ostream &dout,timer &&t){
       t.display();
      return cout;
    }
     ostream& operator <<(ostream &dout,timer &t){
       t.display();
      return cout;
    }
    istream& operator >>(istream &din,timer &t){
    cin>>t.h>>t.m>>t.s;
    t.normalize(t.h,t.m,t.s);
    return cin;
    }
      istream& operator >>(istream &din,timer &&t){
    cin>>t.h>>t.m>>t.s;
    t.normalize(t.h,t.m,t.s);
    return cin;
    }


//timer operator ++(timer &t){
//  return t.input(t.h,t.m,++(t.s));
//}
//timer operator ++(timer &t,int=1){
//t.input(t.h,t.m,++(t.s));
//return t.normalize(t.h,t.m,(t.s)-1);
//}
int main()
{
 timer t(0,0,0),t1,t2;
// t.input(1,63,3600);
// t1.input(1,45,4573);
cin>>t>>t1;
cout<<t;
t2=t+t1;
  operator <<(cout,(t+t1));
 cout<<endl;
 if(t>t1)
    cout<<"t is greater";
 else
    cout<<"t1 is greater";
    cout<<endl;
    (++t).display();
    cout<<endl;
    cout<<(t++);

 cout<<endl<<++t;
 cout<<endl<<t++;

}



