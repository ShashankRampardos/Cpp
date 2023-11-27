class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        for(int i=0;i<n;i++)
            s.push(i);
        
        
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(M[a][b])
              s.push(b);
            else
              s.push(a);
            }
            
        
        int mayBeACelebraty=s.top();
        
        for(int i=0;i<n;i++){
            if(M[mayBeACelebraty][i]==1)
              return -1;
            if(M[i][mayBeACelebraty]==0&&i!=mayBeACelebraty)
              return -1;  
        }
        
       
        
        return mayBeACelebraty;
    }
};
