class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
       int pickG=0;
       int pickM=0;
       int pickP=0;
       
       int travelG=0;
       int travelM=0;
       int travelP=0;

       int lastG=0;
       int lastP=0;
       int lastM=0;

       for(int i=0;i<garbage.size();i++){
               string s=garbage[i];
           for(auto ch:s){
               if(ch=='G'){
                   pickG++;
                   lastG=i;
               }
               else if(ch=='P'){
                   pickP++;
                   lastP=i;
               }
               else if(ch=='M'){
                   pickM++;
                   lastM=i;
               }

           }
       }
       for(int i=0;i<lastG;i++){
           travelG+=travel[i];
       }
       for(int i=0;i<lastP;i++){
           travelP+=travel[i];
       }for(int i=0;i<lastM;i++){
           travelM+=travel[i];
       }
       int ans=(travelP+pickP)+(travelG+pickG)+(travelM+pickM);
       return ans;
    }
};
