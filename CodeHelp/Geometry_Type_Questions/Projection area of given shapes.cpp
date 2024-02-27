class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int projection=0;
        int n=grid.size();
        int maxInARow=INT_MIN;
        int maxInAColumn=INT_MIN;
          
        for(int i=0;i<n;i++){
            maxInARow=INT_MIN;
            maxInAColumn=INT_MIN;
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) projection++;
                if(grid[i][j]>maxInARow)maxInARow=grid[i][j];
                if(grid[j][i]>maxInAColumn)maxInAColumn=grid[j][i];
            }
            projection+=maxInARow+maxInAColumn;
        } 
        
        return projection;

    }
};
