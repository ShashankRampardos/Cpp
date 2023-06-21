#include<iostream>
#include<math.h>
using namespace std;
class Array{
int a[10];
public:
    void input(){
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    }
    int maxElement()
    {
        int m=a[0];
        for(int i=1;i<10;i++)
        {
            if(m<a[i]){
                m=a[i];
            }
        }
        return m;
    }
    int minElement()
    {
        int m=a[0];
        for(int i=1;i<10;i++)
        {
            if(m>a[i]){
                m=a[i];
            }
        }
        return m;
    }
    void editElement(int i,int data){
        a[i]=data;
    }
    int sum(){
      int s=0;
      for(int i=0;i<10;i++){
        s=s+a[i];
      }
      return s;
    }
    double average(){
   return sum()/10.0;
    }


};
int main()
{
Array a;
a.input();
cout<<a.average();
}
