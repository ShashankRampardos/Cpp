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
      Array(){
      arr=new int[5];
      capacity=5;
      lastIndex=-1;

      }
      ~Array(){
       delete arr;
      }

      int enqueue(int data){
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


      int dequeue(){
        if(lastIndex<=capacity/2){
            shrinkArray();
        }
        if(lastIndex!=0)
        {  int t=arr[0];
           shiftLeft(0);
           lastIndex--;
           return t;
        }
        else
            return -1;
      }


     int peek(){
     return arr[0];
     }

};
int main(){
  Queue a;

}
