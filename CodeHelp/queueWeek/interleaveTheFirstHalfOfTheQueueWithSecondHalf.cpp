#include <iostream>
#include <queue>

using namespace std;

void interleaveQ(queue<int>&q){
  
   if(q.size()&1!=0)
    return;
   if(q.empty()) 
    return;
   queue<int> temp;
   int halfSize=q.size()/2;
   while(halfSize--){
    temp.push(q.front());
    q.pop();
   }

   halfSize=halfSize*2;

   while(!temp.empty()){
    q.push(temp.front());
    temp.pop();

    q.push(q.front());
    q.pop();
    
   }

   
}
int main() {
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  
  interleaveQ(q);

  while(!q.empty()){
    cout<<q.front();
    q.pop();
  }
  
  return 0;
}
