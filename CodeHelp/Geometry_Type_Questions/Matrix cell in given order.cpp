class Solution {
    int srcx,srcy;
    
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
         srcx=rCenter;
         srcy=cCenter;
        vector<vector<int>>ans;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
              ans.push_back({i,j});
            
        sort(ans.begin(),ans.end(),
        [this](const vector<int>& a,const vector<int>&b){
        return (abs(a[0]-srcx)+abs(a[1]-srcy))<(abs(b[0]-srcx)+abs(b[1]-srcy));
        }
        );

        return ans;

    }
};
