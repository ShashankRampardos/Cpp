class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n=a.size()-1;
        int l=0,h=n-1;
        int mid=l+(h-l)/2;

        while(l<h){
            if(a[mid]<a[mid+1])
                l=mid+1;
            else
               h=mid;
            mid=l+(h-l)/2;   
        }
        return mid;

    }
};
