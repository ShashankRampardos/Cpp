#include<iostream>
using namespace std;
#define Max 1000
bool has[2][Max+1];
bool srch(int x){
   if(x>=0){
     if(has[0][x]==1)
        return true;
     else
        return false;
   }
   else
   {
       if(has[1][-x]==1)
        return true;
       else
        return false;
   }
}
void ins(int arr[],int n){
for(int i=0;i<n;i++){
    if(arr[i]>=0){
       has[0][arr[i]]=1;
    }
    else
        has[1][-arr[i]]=1;
}
}
int main(){
   int arr[]={2,-1,4,6,4,7};
   ins(arr,(sizeof(arr)/sizeof(arr[0])));
   if(srch(2)){
    cout<<"exist";
   }
   else
    cout<<"not exist";

}
