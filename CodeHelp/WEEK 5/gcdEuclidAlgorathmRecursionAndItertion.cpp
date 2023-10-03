#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<math.h>
using namespace std;
int gcd(int a,int b){

if(a==0)
return b;
 if(a>b)
 b=gcd(a-b,b);
else
 b=gcd(b-a,a);

    return b;
//Iteratinon method
  /*
   while(a!=0){

   if(a>b){
        a=a-b;
    }
    else{
         int temp=a;
        a=b-a;
    b=temp;
    }
   
    }
    return b;*/
}
int main(){
   int a=6,b=5;
   int H=gcd(a,b);

   int L=a*b/H;//for LCM
   cout<<"H:"<<H<<" "<<"L:"<<L;
}
