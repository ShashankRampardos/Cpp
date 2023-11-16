class Solution{
    
    public:
    vector<int> help_classmate(vector<int> a, int n) 
    {  if(n==0) return {};
        stack<int> st;
        st.push(-1);
        
        for(int i=n-1;i>=0;i--){
            
            while(st.top()>a[i]){
                st.pop();
            }
            
            int t=st.top();
            st.push(a[i]);
            a[i]=t;
            
        }
        return a;
        
    } 
};
