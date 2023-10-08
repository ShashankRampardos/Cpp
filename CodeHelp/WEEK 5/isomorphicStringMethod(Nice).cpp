class Solution {
    
public:
// ono one function like mapping
    bool isIsomorphic(string s, string t) {
cout<<s[0]<<" "<<s[1];
       int  hash[256]={0};
       char isTMapped[256]={0};

       for(int i=0;i<s.size();i++){
           if(hash[s[i]]==0&&isTMapped[t[i]]==0){
               hash[s[i]]=t[i];
               isTMapped[t[i]]=true;
           }
       } 
           for(int i=0;i<s.size();i++)
               if(char(hash[s[i]])!=t[i])
                  return false;
           
           return true;
       
    }
};
