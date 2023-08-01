#include<iostream>
using namespace std;

class TwoWayStack{
int *arr;
int l;
int r;
void grow(){

}

public:
    TwoWayStack()
    {
        arr=new int[20];
        l=-1;
        r=19;
    }
bool pushFirst(int data){
    if(l==r){
      return false;
    }
    else{
        l++;
        arr[l]=data;
    }
    }
bool pushLast(int data){
    if(l==r){
        return false;
    }
    else{
        r--;
        arr[r]=data;
    }
}

bool popFirst(){
    if(l==-1)
        return false;
    else{
        l--;
    }

}
int peekLast(){
   return arr[l];
}
int peekFirst(){
return arr[r];
}
bool popLast(){
    if(r==-1){
        r++;
    }
}


};
int main(){
TwoWayStack s;

s.pushFirst(4);
s.pushLast(5);
cout<<s.peekFirst();
}
