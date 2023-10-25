class Solution {

// house robber 2 ka comment dekh explaination kay lia
    int solve(vector<int>& nums,int l,int e){
        if(l>e)
          return 0;
        int include=nums[l]+solve(nums,l+2,e); 
        int exclude=0+solve(nums,l+1,e);

        return max(include,exclude);

    }
public:

    int rob(vector<int>& nums) {
       
       return solve(nums,0,nums.size()-1);// 0 to last element kay lia solve kia hay
    }
};

