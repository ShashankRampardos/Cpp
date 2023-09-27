class Solution {
public:
    bool isit(string t, char c,int k){
        int n=t.size()-1;
        k--;
        if(t.size()<k)
         return false;

        while(k){
            if(t[n--]==c)
              k--;
            else 
              break;  
        }
        if(!k)
         return true;
        else 
         return false; 
    }
    string removeDuplicates(string s, int k) {
         string t;
         for(int i=0;i<s.size();i++){
         if(isit(t,s[i],k)){
             int iterator=k;
             while(iterator-->1)
               t.pop_back();
         
         }    
         else{
             t.push_back(s[i]);
         }
         }
         return t;  
    }
};
