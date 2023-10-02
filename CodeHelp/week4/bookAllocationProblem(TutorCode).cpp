//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{   
    bool predicateFunction(int a[],int b,int s,int ans){
        
        int c=1;// for number of students
        int sum=0;
        
        for(int i=0;i<b;i++){// visit each element of page array
            if(a[i]>ans) return false;// return false if any element is greater than current possoble solution
            else if(sum+a[i]>ans){//
                c++;// keep track of number of student
                sum=a[i];// strat from a[i] for next student allocation
                  // a[i] bacha ha abhi allocation may participate nahi hua vo, so start with a[i] for next allocation 
                if(c>s) return false;// student finished but books still left then return false
                
            }
            else {
                sum+=a[i];//sum pages for current student allocation
            }
        }
        return true;// kahi false nahi aya matlab true at the end.
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int b, int s) 
    {   if(s>b) return -1;
        int l=0;
        int h=accumulate(a,a+b,0);
        int mid = l+(h-l)/2;
        int ans=-1;
        
        while(l<=h){
            if(predicateFunction(a,b,s,mid)){
                ans=mid;
                h=mid-1;
            }
            else
             l=mid+1;
             
             mid=l+(h-l)/2;
             
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
