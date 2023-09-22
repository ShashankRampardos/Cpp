class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {       int n=a.size(); 
        int l=0;
        int h=n-1;
        
        while((h-l+1)!=k){
            if(x-a[l]>a[h]-x)
            l++;
            else
            h--;
        }
        return vector<int>(a.begin()+l,a.begin()+h+1);
    }
};
