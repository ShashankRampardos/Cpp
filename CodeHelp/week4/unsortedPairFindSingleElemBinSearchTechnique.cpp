#include<iostream>

using namespace std;

int searchBin(int a[],int n){
int l=0;
int h=n-1;
int mid=l+(h-l)/2;
// abh ye logic ha ismay arrayIndexOutOfBound resolve nahi ha + single element ka case bhi nahi ha resolved.

while(l<=h){
    if(mid%2==0){
    if(a[mid]!=a[mid+1]&&a[mid]!=a[mid-1])
        return mid;
    else if(a[mid]==a[mid+1])
        l=mid+2;
    else if(a[mid]==a[mid-1])
        h=mid-2;

    }
    else{
        if(a[mid]==a[mid-1])
            l=mid+1;
        if(a[mid]==a[mid+1])
            h=mid-1;
    }
     mid=l+(h-l)/2;

}

}
int main(){
int a[11]={6,6,2,2,5,5,7,7,8,1,1};
cout<<searchBin(a,11);

}
