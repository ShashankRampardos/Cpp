#include<iostream>
#include<assert.h>
using namespace std;

/*

*/

int main(){
    int n=5;
int k;
cout<<"*"<<endl;
   for(int i=0;i<=n/2;i++){
k=1;
cout<<"*";
    for(int j=0;j<=2*i;j++){
        if(j<i){
        cout<<k++;
        }
        else{
            cout<<k--;
        }
    }
    cout<<"*";
    cout<<endl;
   }
   for(int i=0;i<n/2;i++){
        k=1;
        cout<<"*";
        int condition=n-(3+2*i);
    for(int j=0;j<=condition;j++){
            if(j<condition/2)
               cout<<k++;
             else
                cout<<k--;
    }
    cout<<"*";
    cout<<endl;
   }
   cout<<"*";
}
