class Solution {
public:
    int binSrch(vector<int>& a,int l,int x){//standard binary search function

        int h=a.size()-1;
        int mid=l+(h-l)/2;

        while(l<=h){

            if(a[mid]==x){
                return mid;
            }
          else  if(a[mid]>x){
                h=mid-1;
            }
            else if(a[mid]<x){
                l=mid+1;
            }
            mid=l+(h-l)/2;

        }
        return -1;
    }

    
    int findPairs(vector<int>& a, int k) {
        sort(a.begin(),a.end());
int n=a.size();
set<pair<int,int>> ans;
        for(int i=0;i<n-1;i++){
            if(binSrch(a,i+1,a[i]+k)!=-1)
            ans.insert({a[i],a[i]+k});
        }
        return ans.size();
    }
};
