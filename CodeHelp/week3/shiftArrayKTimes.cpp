#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void shiftKTimes(vector<int>&a,int k){
    int n=a.size();
    reverse(a.begin(),a.end());
   reverse(a.begin(),a.begin()+k);
   reverse(a.begin()+k,a.begin()+n);
   
}   
  int main(){
      vector<int> a={2,3,5,6,1,2,4};
      shiftKTimes(a,4);
      int n=a.size();
     for(int i=0;i<n;i++) cout<<a[i];
      
  }  
