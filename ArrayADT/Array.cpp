#include<iostream>
#include<windows.h>
using namespace std;

class Array{
  int arr[100];
  const int capacity;
  int lastIndex;

   void shiftRight(int point){
          for(int i=lastIndex;i>point;i--){
            arr[i]=arr[i-1];
          }
      }

      void shiftLeft(int point){
          for(int i=point;i<lastIndex;i++){
            arr[i]=arr[i+1];
          }
      }

  public:
      Array():capacity(100){

      lastIndex=-1;

      }
      int insertData(int data){

        if(lastIndex<capacity){
               lastIndex++;
        arr[lastIndex]=data;
        return 1;
        }
        else
            return -1;
        }
      int deleteArrayElement(){
        if(lastIndex!=0)
        {
           lastIndex--;
           return 1;
        }
        else
            return -1;
      }
      int insertData(int index,int data){
          if(lastIndex==capacity-1)
            return -1;
          if(index<capacity&&index<=lastIndex){

                 int temp=arr[lastIndex];
                 shiftRight(index);
                 lastIndex++;
                 arr[lastIndex]=temp;
                 arr[index]=data;
          }
          else return -1;
      }
      int deleteArrayElement(int index){
      if(lastIndex<capacity&&index<=lastIndex)
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

};
int main(){
  Array a;
  a.insertData(4);
   a.insertData(5);
    a.insertData(8);
     a.insertData(7);
     a.insertData(6);
     a.insertData(0);
     a.insertData(1);
a.displayArray();
a.deleteArrayElement(1);
a.displayArray();

}
