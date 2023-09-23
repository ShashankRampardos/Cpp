// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int expoBinSrch(vector<int>& a, int target){
    int n=a.size();
    int i=0;
    if(a[0]==target)
        return 0;
    for(i=1;i<n&&a[i]<target;i=i*2);
    int l=i/2,h=min(i,n-1);
    int mid=l+(h-l)/2;

    while(l<=h){

        if(a[mid]==target)
          return mid;
        else if(a[mid]>target)
        h=mid-1;
        else //a[mid ]<target
        l=mid+1;

        mid=l+(h-l)/2;

    }
 return -1;


}
int main() {
    vector<int> a={2,3,6,7,8,9};
   cout<< expoBinSrch(a,9);

    return 0;
}
