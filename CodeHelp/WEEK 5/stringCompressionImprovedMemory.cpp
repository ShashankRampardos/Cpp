class Solution {
public:
    int compress(vector<char>& c) {
             int prev=c[0];
             int count=1;
             int index=0;

             for(int i=1;i<c.size();i++){
               
               if(c[i]==prev){
                   count++;
               }
               else{
                   c[index++]=prev;
                   if(count>1){
                   int start=index;
                   while(count){
                   c[index++]=count%10+'0';
                   count/=10;
                   }
                   reverse(c.begin()+start,c.begin()+index);
                   }
                  count=1;
               prev=c[i];
               }
             } 

                   c[index++]=prev;
                   if(count>1){
                   int start=index;
                   while(count){
                   c[index++]=count%10+'0';
                   count/=10;
                   }
                   reverse(c.begin()+start,c.begin()+index);
                   }

               return index;     
    }
};
