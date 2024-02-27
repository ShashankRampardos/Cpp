class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int area=0;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)continue;
                area+=grid[i][j]*6-2*(grid[i][j]-1);
                if(j>0)//check right
                  area-=grid[i][j]>grid[i][j-1]?grid[i][j-1]:grid[i][j];
                if(i>0)
                  area-=grid[i][j]>grid[i-1][j]?grid[i-1][j]:grid[i][j];
                if(j<n-1)
                  area-=grid[i][j]>grid[i][j+1]?grid[i][j+1]:grid[i][j]; 
                if(i<n-1)//check down side 
                  area-=grid[i][j]>grid[i+1][j]?grid[i+1][j]:grid[i][j];    
            }
        }
        return area;
    }
};
