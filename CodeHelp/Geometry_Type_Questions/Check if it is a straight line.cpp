class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       int n = coordinates.size();

       double commonSlope=(coordinates[0][1]==coordinates[1][1])?
       INT_MAX:((double)(coordinates[1][0]-coordinates[0][0])
       /(coordinates[1][1]-coordinates[0][1]));

        for(int i=2;i<n;i++){

          double slope=(coordinates[i-1][1]==coordinates[i][1])?
          (INT_MAX):((double)(coordinates[i][0]-coordinates[i-1][0])
          /(coordinates[i][1]-coordinates[i-1][1]));
          
          if(slope!=commonSlope)return false;
        }
        return true;
    }
};
