#include<iostream>
using namespace std;
class num
{
  protected:
      float n;
  public:
      setN()
      {
          cout<<"\nEnter a Real number:";
          cin>>n;
      }
};
class square:public num
{
public:
    getSquare()
    {
        cout<<"\nSquare="<<n*n;
    }
};
class cube:public num
{
public:
    getCube()
    {
        cout<<"\ncube="<<n*n*n;
    }
};
int main()
{
    square s1;
    cube c1;
    s1.setN();
    s1.getSquare();
    c1.setN();
    c1.getCube();
    return 0;
}
