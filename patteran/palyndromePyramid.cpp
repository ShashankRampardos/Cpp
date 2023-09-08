#include<iostream>
using namespace std;



int main(){
    int n=5;
  for(int i=0;i<n;i++){
int j=0;
    while(j<=(n-i-2)){
        cout<<" ";
        j++;
    }
    int k=0;
    while(j<=n+i-1){
        if(j<=n-1)
            cout<<++k;
        else
            cout<<--k;
        j++;
    }
    cout<<endl;
    continue;
  }
}
