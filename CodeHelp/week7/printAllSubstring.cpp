
#include<bits/stdc++.h>
using namespace std;
void printSubarray(vector<int>&,int,int);
void driver(vector<int>& a){
    for(int start=0;start<a.size();start++){
       printSubarray(a,start,start);
    }
}

void printSubarray(vector<int>& a,int s,int e){
    
    if(e>=a.size())
    return;
    
    for(int i=s;i<=e;i++){
        cout<<a[i];
        
    }
    cout<<endl;
    printSubarray(a,s,e+1);
    
}


int main() {
    vector<int> a={1,2,3,4,5};
    driver(a);
    return 0;
}
