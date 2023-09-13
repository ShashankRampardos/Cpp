class Solution {
public:
    inline int sum(vector<int>& a, int first,int last){
        int sum=0;
        while(first<=last){
            sum=sum+a[first++];

        }
        return sum;
    }
    double findMaxAverage(vector<int>& a, int k) {
    int avgSum=INT_MIN;
    int SUM=sum(a,0,k-1);//O(N)
    int n=a.size()-1;
    if(k>n+1)//K greater than array size
    return -1;
    if(n+1==1){//array have one size
        return a[0];
    }
     if(k==n+1)//k is equal to array size.
     return SUM/(double)k;
    for(int i=0,j=k-1;j<n;i++,j++){
        
        if(avgSum<SUM){
            avgSum=SUM;
        }
        SUM=a[j+1]-a[i]+SUM;
        

    }
    if(avgSum<SUM){
            avgSum=SUM;
        }
    return avgSum/(double)k;
    }
};
