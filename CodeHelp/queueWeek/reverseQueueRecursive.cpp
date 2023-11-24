#include <iostream>
#include <queue>
// iterative is more better
using namespace std;
void reverse(queue<int>& q){
  if(q.empty())
    return;
  
  int temp=q.front();
  q.pop();
  reverse(q);
  q.push(temp);

}
int main() {
  queue<int> q;
  //stack<int> s;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);  
  reverse(q);
  //cout << "Hello world!" << endl;
  while(!q.empty()){
    cout<<q.front();
    q.pop();
  }
  return 0;
}
