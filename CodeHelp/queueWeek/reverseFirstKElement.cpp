#include <iostream>
#include <stack>
#include <queue>

using namespace std;
void revK(queue<int>& q,int k){
  stack<int> s;
  int remaining=q.size()-k;
  while(k--){
    s.push(q.front());
    q.pop();
  }
  while(!s.empty()){
    q.push(s.top());
    s.pop();
  }
  while(remaining--){
    int t=q.front();
    q.pop();
    q.push(t);
  }


}
int main() {
  queue<int> q;
  int k=2;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  revK(q,k);

    while(!q.empty()){
    cout<<q.front();
    q.pop();
  }
//  cout << "Hello world!" << endl;
  return 0;
}
