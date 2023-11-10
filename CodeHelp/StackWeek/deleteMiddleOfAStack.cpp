class Solution
{
    public:
    void helper(stack<int>&s,int n){
        //base case
        if(n==1){
           s.pop();
        }
        else{
        //execution
        int temp=s.top();
        s.pop();
        //recursion
        helper(s,n-1);
        //bask tracking
        s.push(temp);
        }
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int size)
    {
        
        
         //middle index finding (startion from 1 not 0)
         int n;
         if(size&1){//sizze is odd
             n=(size/2)+1;
         }
         else{//size is even
             n=size/2+1;
         }
         
          helper(s,n);//recursion bhaiya
    }
};
