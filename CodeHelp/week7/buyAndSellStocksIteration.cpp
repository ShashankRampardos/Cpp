class Solution {
    
public:
// pahlay min price ko har din bech kay dekh
    int maxProfit(vector<int>& a) {
        int min=INT_MAX;
        int maxProf=INT_MIN;

        for(int i=0;i<a.size();i++){
            if(a[i]<min)
            min=a[i];
            if(a[i]-min>maxProf)
            maxProf=a[i]-min;

        }     
        return maxProf;    
    }

};
