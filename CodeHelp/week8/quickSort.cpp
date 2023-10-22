// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& a,int start,int end){
    if(start>=end)
    return;
    int i=start-1;
    int j=start;
    int pivot=end;
    while(j<pivot){
        if(a[j]<a[pivot]){
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    i++;
    swap(a[i],a[pivot]);
    quickSort(a,start,i-1);
    quickSort(a,i+1,end);
    
}
int main() {
 vector<int> a={5,4,3,2,1};
 quickSort(a,0,4);
 for(auto dig: a){
     cout<<dig<<" ";
 }
    return 0;
}
