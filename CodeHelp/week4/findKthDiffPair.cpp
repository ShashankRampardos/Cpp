class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        sort(a.begin(),a.end());
int c=0;
int n=a.size();
int i=0,j=1;
set<pair<int,int>> ans;
        while(j<n){
            
             int D=a[j]-a[i];
            if(D<k)
                j++;
            
            else
            if(D>k)
                i++;
            else
            if(D==k)
            { ans.insert({a[j],a[i]});
                j++;i++;
            }
            if(i==j)j++;
        }
        return ans.size();
    }
};
