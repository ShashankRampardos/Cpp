class Solution {
    int recursive(vector<int>&a, int& min, int& maxProf,int i){
        if(i>=a.size())
        return maxProf;
        if(a[i]<min)
          min=a[i];
        if(a[i]-min>maxProf)
          maxProf=a[i]-min;

       return recursive(a,min,maxProf,i+1);  
  
    }
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxProf=INT_MIN;
        int i=0;
        return recursive(prices,min,maxProf,i);         
    }

};
