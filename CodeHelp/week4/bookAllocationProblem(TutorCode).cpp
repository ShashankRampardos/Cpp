//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;



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
    int findPages(int a[], int b, int s) 
    {   if(s>b) return -1;
        int l=0;
        int h=accumulate(a,a+b,0);// ye keval integer range pay he kam karega
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

