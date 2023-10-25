class Solution {
    int solve(vector<int>& nums,int l,int e){
        if(l>e)//base case
          return 0;
        int include=nums[l]+solve(nums,l+2,e);// first element inclued
        int exclude=0+solve(nums,l+1,e);//first element nnot include

        return max(include,exclude);

    }
public:

    int rob(vector<int>& nums) {
    if(nums.size()==1)
      return nums[0]; // edge case (ont element)
      //bhai ye 2 call islia kyui agar one call may (0 to last element) call kia tho ye circular wali condition break kar dega, like when 0th and last element include in the answer which is out of the constraint. 
      int option1=solve(nums,0,nums.size()-2);// call from 0th element to second lase elemnent
       int option2=solve(nums,1,nums.size()-1);//call froom 1th element to last element 
// max of both because we want max amount in this circular arrangement of houses
      return max(option1,option2); 
    // return option1;
    }
};
