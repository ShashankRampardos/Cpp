void insertAtSortedStack(stack<int>& s,int x){
    if(s.empty()||x>s.top()){
        s.push(x);
        return;
    }
    //ek case may solve karunga 
    int temp=s.top();
    s.pop();
    //baki recursion samal lega
    insertAtSortedStack(s,x);
    
    //back track
    s.push(temp);
}
void SortedStack :: sort()
{
   if(s.empty()){
       return;
   }
   //1 case may
   int temp=s.top();
   s.pop();
   //baki recursion
   sort();
   //back track
   insertAtSortedStack(s,temp);
   
}
