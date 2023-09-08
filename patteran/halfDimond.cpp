#include<iostream>
using namespace std;

/*

*/

int main(){
    int n=5;
  for(int i=0,k=1;i<2*n-1;i++){
    int j;
    if(i<n){
         j=0;
        while(j<=i){
            cout<<"*";
            j++;
        }
    }
    else{
      j=0;
        while(j<=i-2*k){
            cout<<"*";
            j++;
        }
        k++;
    }
    cout<<endl;
  }
}
