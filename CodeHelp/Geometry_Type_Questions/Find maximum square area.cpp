#define sqr(a) (long long)((long long)(a)*(long long)(a))

class Solution {
public:
//process each rectangle with all rectangles after the current rectangle in the array.
//apply formula for finding intersection of two rectangle and check if this intersection is valid or not.

    long long largestSquareArea(vector<vector<int>>& btmLftCoordinates, vector<vector<int>>& topRightCoordinates) {
        long long area=0;
        int n=btmLftCoordinates.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               int bottomLeftXOfIntersectingRectangle=max(btmLftCoordinates[i][0],btmLftCoordinates[j][0]);
               int bottomLeftYOfIntersectingRectangle=max(btmLftCoordinates[i][1],btmLftCoordinates[j][1]);
               int topRightXOfIntersectingRectangle=min(topRightCoordinates[i][0],topRightCoordinates[j][0]);
               int topRightYOfIntersectingRectangle=min(topRightCoordinates[i][1],topRightCoordinates[j][1]);
               
               //check if the found intersecting RECTANGLE is valid or not.
               if(bottomLeftXOfIntersectingRectangle<topRightXOfIntersectingRectangle&&
                  bottomLeftYOfIntersectingRectangle<topRightYOfIntersectingRectangle
                 ){
                //we could get intersecting rectangle area instead of square area with slight changes here.
                  area=max(area,(long long)min(//to get squared from the rectangle if rectangle is found in intersection
                        sqr(topRightXOfIntersectingRectangle-bottomLeftXOfIntersectingRectangle),
                        sqr(topRightYOfIntersectingRectangle-bottomLeftYOfIntersectingRectangle)
                     )
                     );
                 }
            }
        }
        return area;//area has side of square now return side*side
    }
};
//little Input optimization, you may ignore.
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
