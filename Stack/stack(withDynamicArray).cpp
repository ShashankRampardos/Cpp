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

   void shiftRight(int point){
          for(int i=lastIndex;i>point;i--){
            arr[i]=arr[i-1];
          }
      }


      void shiftLeft(int point){
          for(int i=lastIndex;i>point;i--){
            arr[i-1]=arr[i];
          }
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
     return arr[lastIndex];
     }

};
int main(){
  Stack a;
  a.push(4);
}
