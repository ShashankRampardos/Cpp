#include <iostream>
#include<vector>
using namespace std;
int pivotElem(vector<int>& a)
{
    int n=a.size();
    int l=0,h=n-1,mid=l+(h-l)/2;

    while(l<=h) {

        if(a[mid]>a[mid+1])
            return mid;
        else if(a[mid]<a[mid-1])
            return mid-1;
        else if(a[mid]<a[l])
            h=mid-1;
        else //if(a[mid]>a[h])
            l=mid;

        mid=l+(h-l)/2;

    }

    return -1;

}

int main()
{
    vector<int> a= {11,12,0,1,2,3,4,5};
    cout<<pivotElem(a);
}
