#include<iostream>
#include<vector>
using namespace std;
int firstOccurance(vector<int>& a,int tar){
    int n=a.size();
    int l=0,h=n-1;
    int mid=l+(h-l)/2;
    int ans=-1;
    
    while(l<=h){
        
        if(a[mid]<tar){
             l=mid+1;
        }
        else if(a[mid]>tar){
            h=mid-1;
        }
        else {
            ans=mid;
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }
    return ans;
}
int lastOccurance(vector<int> &a,int tar){
    int n=a.size();
    int l=0,h=n-1;
    int mid=l+(h-l)/2;
    int ans=-1;
    
    while(l<=h){
        
        if(a[mid]<tar){
             l=mid+1;
        }
        else if(a[mid]>tar){
            h=mid-1;
        }
        else{
            ans=mid;
            l=mid+1;
        }
   mid=l+(h-l)/2;
    }
    return ans;
    
}
int totalOccurance(vector<int> &a,int tar){
    int ans=lastOccurance(a,tar)-firstOccurance(a,tar)+1;
    return ans;
}
int main(){
    vector<int> a={1,2,5,5,5,5,6};
    
    cout<<totalOccurance(a,5);
    
}
