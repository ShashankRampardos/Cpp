class Solution {
public:
    int findMinDifference(vector<string>& time) {
        int n=time.size();
        vector<int> num;
        for(int i=0;i<n;i++){//convert each string into (int) minutes, then store them in a int array 
            string st;
            int minutes;
            st=time[i].substr(0,2);
            minutes=stoi(st)*60;//static function
            st=time[i].substr(3,2);
            minutes+=stoi(st);
            num.push_back(minutes);
        }// sort int array num then find minimum difference.
      // edge case is that 23:59-00:00 is 1 min not 1439 minutes use operation 1440 + time[0]-time[n-1] to handle this. 
        sort(num.begin(),num.end());
        int d1=num[1]-num[0];
        int d2=1440+num[0]-num[n-1];
        int d=(d1>=d2)?d2:d1;
        for(int i=2;i<n;i++){
            if(num[i]-num[i-1]<d)
             d=num[i]-num[i-1];
        }
       return d;
    }
};
