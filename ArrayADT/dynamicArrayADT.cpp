#include<iostream>
#include<windows.h>
using namespace std;

class Array{
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
      Array(){
      arr=new int[5];
      capacity=5;
      lastIndex=-1;

      }
      ~Array(){
       delete arr;
      }

      int insertData(int data){
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

        int insertData(int index,int data){
          if(lastIndex==capacity-1)
            growArray();
          if(index<capacity&&index<=lastIndex&&index>=0){

                 int temp=arr[lastIndex];
                 shiftRight(index);
                 lastIndex++;
                 arr[lastIndex]=temp;
                 arr[index]=data;
          }
          else return -1;
      }

      int deleteArrayElement(){
        if(lastIndex<=capacity/2){
            shrinkArray();
        }
        if(lastIndex!=0)
        {
           lastIndex--;
           return 1;
        }
        else
            return -1;
      }

      int deleteArrayElement(int index){
           if(lastIndex<=capacity/2){
            shrinkArray();
        }
      if(lastIndex<capacity&&index<=lastIndex&&index>=0)
      {
        shiftLeft(index);
        lastIndex--;
        return 1;
      }
      else return -1;
      }

      void displayArray(){

      for(int i=0;i<=lastIndex;i++){
        cout<<endl<<arr[i]<<endl;
         }
      }


     int getElement(int index){
      if(index<=lastIndex)
        return arr[index];
      else return -1;
      }
     int getElement(){
     return arr[lastIndex];
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
