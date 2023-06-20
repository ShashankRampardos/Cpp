#include<iostream>
#include<math.h>
using namespace std;
int f(int,int=0);
int main()
{
 int n;
 cin>>n;
 f(n);
}
int f(int n,int s){
 if(n==0)
    return 0;
 f(n/2);
 cout<<n%2;

}
