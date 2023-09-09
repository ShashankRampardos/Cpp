#include<iostream>
#include<assert.h>
using namespace std;

/*

*/

int main(){
    int n=10;
    assert(n<=9);
  for(int i=0;i<n;i++){
   int k=1;

   for(int j=0;j<17;j++){

          if(j>=8-i&&j<=8+i){
            if(k){
                cout<<i+1;
                k--;
            }
            else{
                cout<<"*";
                k++;
            }
          }
          else
          cout<<"*";

   }
    cout<<endl;
  }
}
