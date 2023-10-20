// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int h);
void mergeSort(int *arr,int l,int h){
    if(l>=h)
    return;
    
    int mid =l+(h-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,h);
    
}

void merge(int *arr,int l,int h){
    // setting up size of subArrays
    int mid=l+(h-l)/2;
    int lowSize=mid-l+1;
    int highSize=h-mid;
 
    //creating subArrays
 
    int *leftA= new int[lowSize];
    int *rightA= new int[highSize];
 
    //copying the main array value in subArrays
 
    for(int i=l,j=0;j<=mid;i++,j++)
    leftA[j]=arr[i];
    
    for(int i=mid+1,j=0;i<=h;i++,j++)
    rightA[j]=arr[i];
    //setting up iterators
    int L=0;
    int R=0;
    int i=l;
    //main logic 
    while(L<lowSize&&R<highSize){
        if(leftA[L]>rightA[R]){
            arr[i]=rightA[R];
            R++;
            i++;
        }
        else{
            arr[i]=leftA[L];
            L++;
            i++;
        }
    }
    
    //2 edge case
    
    //#1
    
       while(L<lowSize){
            arr[i]=leftA[L];
            L++;
            i++;
        }
     //#2
    
        while(R<highSize){
            arr[i]=rightA[R];
            R++;
            i++;
        }
 //delocation
    delete[] leftA;
    delete[] rightA;
    
}
int main() {
    int a[]={9,8,7,6,5,4,3,2,1};
    int l=0;
    int size=9;
    int h=size-1;
   mergeSort(a,l,h);
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
    return 0;
}
