#include<iostream>
using namespace std;
class D
{
    int km,m;
    public:
    D()
    {
        km=0;m=0;
    }
  inline void setD();
  inline void getD();
  inline void normalizeD(int,int);
  inline D operator +(D);

};
void D::setD()
{
     cout<<"Enter Kilometer and Meter:\n";
      cin>>km>>m;
   normalizeD(km,m);
}

void D::getD()
{
    cout<<"D:"<<km<<"km and "<<m<<"m";
}
D D::operator+(D d)
{
    D temp;
    temp.m=m+d.m;
    temp.km=km+d.km;
    temp.normalizeD(temp.km,temp.m);
    return temp;
}
void D::normalizeD(int km,int m)
{
    if(m>=1000)
    {
        this->km=km+(m/1000);
        this->m=m%1000;
    }
}

int main()
{
    D d1,d2,d3;
    d1.setD();
    d2.setD();
    d3=d1+d2;
    d3.getD();
    return 0;
}
