class Solution { // put then count then put then count...
public:
    int compress(vector<char>& chars) {
        vector<char> c;

       for(int i=0;i<chars.size();){
        c.push_back(chars[i]);
        char t=chars[i];
        int count=0;
        while(i<chars.size()&&t==chars[i]){
            i++;
            count++;
        }
        if(count==1) continue;
        string num=to_string(count);
        for(int k=0;k<num.size();k++)
          c.push_back(num[k]);
      }
      chars=c;
      return c.size();
    }
};
