class Solution {
     vector <int> mapping (vector<char>& s){
         vector<int> map(256,0);

         for(auto ch:s)
             map[ch]++;
         return map;
     }
public:
    int compress(vector<char>& s) {
        vector<int>map = mapping(s);
        vector<char> str;
        if(s.size()==1){ 
          str.push_back(s[0]);
          return str.size();
        }
        for(int i=0;i<256;i++){
            while(i<256&&map[i]==0)
            i++;
              if(i==256) break;
            str.push_back(i);

            string num= to_string(map[i]);
             if(map[i]==1) 
             continue;
            for(int k=0;k<num.size();k++)
               str.push_back(num[k]);

        }
        if(str[str.size()-1]=='1')
        str[str.size()-1]=' ';
        s=str;
        return str.size();
    }
};
