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
    int n=8,c;

    for(int i=1;i<n;i++){
            c=1;
        for(int j=1;j<=i;j++){
            cout<<c;
            c=c*(i-j)/j;

        }
        cout<<endl;
    }
}
