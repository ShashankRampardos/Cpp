//beats 100% of c++ users

class Solution {
public:
    int strStr(string& haystack, string& needle) {
     int h=haystack.size();
     int n=needle.size();
    
    int ans=-1;
     for(int i=0;i<h;i++)
         if(haystack[i]==needle[0]){
             int k=i+1; int j=1;ans=i;
             while(j<n&&k<h&&haystack[k]==needle[j]){
                 j++;
                 k++;
             }
             if(j<n)
             ans=-1;
             else 
             return ans;
         }
     return ans; 
    }
};
