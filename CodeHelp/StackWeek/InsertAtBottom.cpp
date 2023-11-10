class Solution{
public:
    stack<int> insertAtBottom(stack<int> &St,int X){
        if(St.empty()){
            St.push(X);
            return St;
        }
        else{
            int temp=St.top();
          //processing
          St.pop();
          //recursion bhaiya  
         insertAtBottom(St,X);
          //back tracking  
          St.push(temp);
            return St;
        }
    }
};
