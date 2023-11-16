class Solution{
    
    public:
    vector<int> prevSmallElement(vector<int> a, int n) 
    {  if(n==0) return {};
        stack<int> st;
        st.push(-1);
        
        for(int i=0;i<n;i++){
            
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
