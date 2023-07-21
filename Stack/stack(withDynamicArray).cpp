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
  Array a;
  a.insertData(4);
  a.insertData(5);
  a.insertData(8);
  a.insertData(7);
  a.insertData(1);
  a.insertData(2);
  a.insertData(9);
  a.insertData(5);
  a.insertData(0,2);
  
a.displayArray();
a.deleteArrayElement(2);
a.displayArray();

}
