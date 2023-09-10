#include<iostream>
#include<assert.h>
using namespace std;

/*
*
*1*
*121*
*12321*
*123*
*1*
*
*/


int main(){
 int n=19
 ;
 int m=n-2;
 int cond=2*n-1;
 char c='`';
    for(int i=0;i<=cond;i++){

        if (i<n)for(int j=0;j<2*n;j++){
            if(j<=i||j>=cond-i)
                cout<<c;
            else//if(j>=i+1&&j<=cond-i-1)
                 cout<<" ";
            }
        if(i==n)for(int j=0;j<2*n;j++){ cout<<c;}
        
        if(i>n){ for(int j=0;j<2*n;j++){
            if(j<=m||j>=i){
                cout<<c;
            }
            else cout<<" ";
        }
        m--;
         }
        cout<<endl;
    }
}
