// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

bool binSearch(vector<int> &a, int target){
    int n=a.size();
    int l=0,h=n-1;
    int mid=l+(h-l)/2;
    
    while(l<=h){
        if(a[mid]>target)
        h=mid-1;
        else if(a[mid]<target)
        l=mid+1;
        else
        return true;
        mid=l+(h-l)/2;
    }
    return false;
}
int main() {
vector<int> a={2,4};
    bool ans=binSearch(a,4);
    cout<<ans;
}
