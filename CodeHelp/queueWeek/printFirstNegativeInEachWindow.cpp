#include <iostream>
#include <queue>

using namespace std;

void printFirstNegativeInEachWindow(int *a,int n,int k){
  deque<int> dq;
   
  for(int i=0;i<k&&i<n;i++){
    if(a[i]<0)
      dq.push_back(i);
  } 
   for(int i=k;i<n;i++){
    //print
     if(dq.size()==0)
       cout<<" "<<0<<" ";
       else
     cout<<a[dq.front()];
       //remove when element is out of range of window
       if(!dq.empty()&&i-k+1>dq.front())//edge case
         dq.pop_front();
       //add negative element index in deque
       if(a[i]<0)
        dq.push_back(i);
          
   }
   //edge case
   if(!dq.empty())
     cout<<a[dq.front()];

  
}
int main() {
  int a[30]={-4,-4,-2,-6,-1,-8};
  int n=6;
  int k=2;
  printFirstNegativeInEachWindow(a,n,k);
  //interleaveQ(q);

 
  
  return 0;
}
