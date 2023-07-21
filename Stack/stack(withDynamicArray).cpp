#include<iostream>
#include<windows.h>
using namespace std;

class Stack{
  int *arr;
  int capacity;
  int lastIndex;

 void growArray(){
   int *p=new int[capacity*2];
   for(int i=0;i<capacity;i++){
    p[i]=arr[i];
   }
   delete arr;
   arr=p;
   capacity*=2;
  }
  void shrinkArray(){
    int *p=new int[capacity/2];
    for(int i=0;i<capacity;i++){
        p[i]=arr[i];
    }
    delete arr;
    arr=p;
  }


  public:
      Stack(){
      arr=new int[5];
      capacity=5;
      lastIndex=-1;

      }
      ~Stack(){
       delete arr;
      }

      int push(int data){
        if(lastIndex==capacity-1){
            growArray();
        }
        if(lastIndex<capacity){
               lastIndex++;
        arr[lastIndex]=data;
        return 1;
        }
        else
            return -1;
        }


      int pop(){
        if(lastIndex<=capacity/2){
            shrinkArray();
        }
        if(lastIndex!=0)
        {
           lastIndex--;
           return arr[lastIndex+1];
        }
        else
            return -1;
      }


     int peek(){
         cout<<arr[lastIndex];
     return arr[lastIndex];
     }

};
int main(){
    Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(8);
  s.peek();s.pop();s.peek();s.pop();

}
