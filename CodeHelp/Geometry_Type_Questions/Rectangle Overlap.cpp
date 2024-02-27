class Solution {
public://just used intersecting rectangle finding fourmla
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        int bottomLeftXOfintersectionRectangle;
        int bottomLeftYOfintersectionRectangle;
        int topRightXOfintersectionRectangle;
        int topRightYOfintersectionRectangle;

        bottomLeftXOfintersectionRectangle=max(rec1[0],rec2[0]);
        bottomLeftYOfintersectionRectangle=max(rec1[1],rec2[1]);
        topRightXOfintersectionRectangle=min(rec1[2],rec2[2]);
        topRightYOfintersectionRectangle=min(rec1[3],rec2[3]);

        if(// if it is a valid intersecting rectangle coordinates 
            bottomLeftXOfintersectionRectangle<topRightXOfintersectionRectangle&&
            bottomLeftYOfintersectionRectangle<topRightYOfintersectionRectangle
          )
          return true;
         else 
          return false; 
    }
};
