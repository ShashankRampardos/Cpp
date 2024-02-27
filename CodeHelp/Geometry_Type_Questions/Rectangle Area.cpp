class Solution {
public:
    //AUB=A+B-AnB used here.
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int bottomLeftXOfintersectionRectangle;
        int bottomLeftYOfintersectionRectangle;
        int topRightXOfintersectionRectangle;
        int topRightYOfintersectionRectangle;

        bottomLeftXOfintersectionRectangle=max(ax1,bx1);
        bottomLeftYOfintersectionRectangle=max(ay1,by1);
        topRightXOfintersectionRectangle=min(ax2,bx2);
        topRightYOfintersectionRectangle=min(ay2,by2);
         
        //use set union formula A+B-AnB
        //add -AnB in area below. 
        int area=0; 
        //if there is a valid intersection rectangle then subtract its area from the area.
        if(
            bottomLeftXOfintersectionRectangle<topRightXOfintersectionRectangle&&
            bottomLeftYOfintersectionRectangle<topRightYOfintersectionRectangle
          )
         area-=(topRightXOfintersectionRectangle-bottomLeftXOfintersectionRectangle)*
               (topRightYOfintersectionRectangle-bottomLeftYOfintersectionRectangle);
         //area has now -(AnB) 
         //now add A+B in area= -(AnB)+A+B
         
         area+=(ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);

         return area;
    }
};
