#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<math.h>
using namespace std;
//-------------------------------------------------------------------
vector<bool> sieve(int n){
   vector<bool> s(n+1,true);
   s[0]=s[1]=false;
   for(int i=2;i*i<=n;i++){
      if(s[i]){
      int j=i*i;
    while(j<=n){
        s[j]=false;
        j+=i;
         }
      }
   }
   return s;
}
//--------------------------------------------------------------------
 vector<bool> segSieve(int l,int h){
   vector<bool> s=sieve(sqrt(h));
   vector<int> primes;
   for(int i=2;i<s.size();i++)
    if(s[i])
       primes.push_back(i);


   vector<bool> ss(h-l+1,true);

   for(auto prime: primes){
    int firstIndex=(l/prime)*prime;
        if(firstIndex<l)
            firstIndex+=prime;

        int j=max(firstIndex,prime*prime);
        while(j<=h){
            ss[j-l]=false;
            j+=prime;
        }
   }
   return ss;
  }
//---------------------------------------------------------------
int main(){
vector<bool> s=segSieve(23,56);
for(int i=0;i<s.size();i++){
    if(s[i])
        cout<<i+23<<" ";
}
}
