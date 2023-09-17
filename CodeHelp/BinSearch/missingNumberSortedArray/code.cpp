#include<iostream>
#include<vector>
using namespace std;
 
int missingElem(vector<int> &a){
    int n=a.size();
    int l=0,h=n-1;
    int mid=l+(h-l)/2;
    int ans=-1;
    
    while(l<=h){
        int diff=a[mid]-mid;
        if(diff==0){
            l=mid+1;
        }
        else{
            ans=mid;
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }    
    if(ans==-1)
    return n;
    return ans;
}

int main(){
    vector<int> a={0,1,2};
    
    cout<<missingElem(a);
    
}
