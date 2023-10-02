#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution{
    bool predicate(int a[],int n,int s,int mid){
      int sum;
      int i=0;
      bool flag=false;
      while(s>0){
            sum=0;
      while(sum<=mid){
        if(i>=n){
            flag=true;
            break;
        }
        sum=sum+a[i];
        i++;
      }
      i--;
      s--;

      }
      return flag;
    }
public:
    int bookAlloc(int a[],int b,int s){
    //int n=a/sizeof(int);
    int l=0;
      int h=0;
    //int h=accumulate(a,a+n,0); // ye keval integer range pay kam karta hay dont use here
   for(int i=0;i<b;i++){
           h+=a[i];
       }
      int mid=l+(h-l)/2;
    int ans=-1;
//if(s>n) return -1;
    while(l<=h){
        if(predicate(a,b,s,mid)){
            h=mid-1;
            ans=mid;
        }
        else
            l=mid+1;
     mid=l+(h-l)/2;
    }
    return ans;
    }
};
int main(){
Solution s;
int a[]={1,2,3};
int n=3;
cout<<s.bookAlloc(a,n,10);

}
