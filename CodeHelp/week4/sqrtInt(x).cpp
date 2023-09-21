//based on search space and prediacte function concept.
//implement intSqrt(x);
class Solution {
public:
    int mySqrt(int x) {
        int ans=-1;
        int l=0;
        int h=x;
        long long int mid= l+(h-l)/2;

        while(l<=h){
            if(mid*mid==(long int)x){
                return mid;
            }else if(mid*mid>(long int)x){
                h=mid-1;
            }
            else{
                l=mid+1;
                ans=mid;
            }
            mid=l+(h-l)/2;
        }
        return ans;

    }
};
