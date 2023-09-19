class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int n=r*c;
        int l=0;
        int h=n-1;
        int mid=l+(h-l)/2;

        while(l<=h){
            
            int i=mid/c,j=mid%c;
            int currentNum=matrix[i][j];

            if(currentNum>target)
                h=mid-1;

            else if(currentNum<target)
                l=mid+1;
            else
                return true;

                mid=l+(h-l)/2;
        }
        return false;
    }
};
