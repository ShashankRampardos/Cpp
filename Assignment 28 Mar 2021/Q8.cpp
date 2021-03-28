#include<iostream>
using namespace std;
inline void increment(int*);
void increment(int&);
float increment(float);
int main()
{
    int a=5;
    float b=5.55;
    increment(&a);
cout<<a<<endl;
increment(a);
cout<<a<<endl;
b=increment(b);
cout<<(b);


    return 0;
}
void increment(int *a)
{
    *a+=1;
}
void increment(int &a)
{
    a++;
}
float increment (float a)
{
    a++;
    return a;
}
