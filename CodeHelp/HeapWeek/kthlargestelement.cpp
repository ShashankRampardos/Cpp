class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int,vector<int>,greater<int>>minh;
        
        for(int i=0;i<k;i++){
            minh.push(arr[i]);
        }
        
        for(int i=k;i<n;i++){
            if(arr[i]>minh.top()){
                minh.pop();
                minh.push(arr[i]);
            }
        }
        vector<int> ans(k,0);
        for(int i=k-1;i>=0;i--){
            ans[i]=(minh.top());
            minh.pop();
        }
        return ans;
    }
};
