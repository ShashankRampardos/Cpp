//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution 
{   
    bool predicateFunction(int a[],int b,int p,int ans){//b is number of boards p is number of painters
        
        long long int c=1;// for number of students
       long long int sum=0;
        
        for(int i=0;i<b;i++){// visit each element of page array
            if(a[i]>ans) return false;// return false if any element is greater than current possoble solution
            else if(sum+a[i]>ans){//
                c++;// keep track of number of student
                sum=a[i];// strat from a[i] for next student allocation
                  // a[i] bacha ha abhi allocation may participate nahi hua vo, so start with a[i] for next allocation 
                if(c>s) return false;// student finished but books still left then return false
                // false matlab books jada ha students kam
            }
            else {
                sum+=a[i];//sum pages for current student allocation
            }
        }
        return true;// kahi false nahi aya matlab true at the end.
        // true means sabh ko allocate ho gai book ya kuch students unallocated rahay gay
    }
    public:
    //Function to find minimum number of pages.
    int minTime(int a[], int b, int p) 
    { 
       
        //if(s>b) return -1;
       long long int l=0;
       long long int h=0;
       //accumulate(a,a+n,0);//ye keval inteer range pay kam karta hay so not appliable here
       for(int i=0;i<b;i++){
           h+=a[i];
       }
       long long int mid = l+(h-l)/2;
        long long int ans=-1;

        
        while(l<=h){
            if(predicateFunction(a,b,p,mid)){
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


