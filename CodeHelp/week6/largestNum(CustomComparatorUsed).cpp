class Solution {
public:
    static bool mycomp(string &a,string &b){
         string t1=a+b;
         string t2=b+a;
         return t1>t2;
    } 
    string largestNumber(vector<int>& nums) {
      vector<string> snums;
        for(auto n:nums){
            snums.push_back(to_string(n));
        }
        sort(snums.begin(),snums.end(),mycomp);
        string s="";
        if(snums[0]=="0")
        return {"0"};

         for(auto snum:snums){
             s+=snum;
         }
         return s;
    }
};
