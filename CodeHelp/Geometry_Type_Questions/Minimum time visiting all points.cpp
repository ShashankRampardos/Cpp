class Solution {
public://Chebyshev Distance concept used here 
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int minTime=0;
        for(int i=1;i<n;i++)//Chebyshev Distance concept used here 
           minTime+=max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
        
        return minTime;
    }
};
