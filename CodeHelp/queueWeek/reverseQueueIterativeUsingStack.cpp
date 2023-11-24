#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  queue<int> q;
  stack<int> s;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);  
  
  while(!q.empty()){
    int t=q.front();
    s.push(t);
    q.pop(); 
  }
  while(!s.empty()){
     q.push(s.top());
     s.pop();
  }
  while(!q.empty()){
    cout<<q.front();
    q.pop();
  }
 // cout << "Hello world!" << endl;
  return 0;
}
