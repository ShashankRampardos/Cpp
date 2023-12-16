#include <iostream>
using namespace std;

class Heap{
  public:
  int *arr;
  int capacity;
  int size;

  Heap(int capacity){
      this->capacity=capacity;
      arr=new int[capacity];
      size=0;
  }
  ~Heap(){
    delete[] arr;
  }

  void insert(int data){
    
    if(size==capacity)
      return;

      size++;//size increment first before taking index because 1 index say sure karna hay, using 1 index based system.
      int index=size;

      arr[index]=data;

      while(index>1){//1 index based
        int parentIndex=index/2;//0 index based may even odd check karna padta
        if(arr[index]>arr[parentIndex]){
          swap(arr[index],arr[parentIndex]);
          index=parentIndex;
        }
        else
         break;
      }

  }

  void deletion(){
       int  index=1;
        arr[1]=arr[size];//size-1 last index nahi hay size hay last index because heap array is 1 indexed here.
       size--;
       while(index<=size){//<= used because size is last index not size-1

       int leftIndex=2*index;
       int rightIndex=2*index+1;
       int largestKaIndex=index;
       if(arr[leftIndex]>arr[index]){
          largestKaIndex=leftIndex;
       }
       if(arr[rightIndex]>arr[index]){
        largestKaIndex=rightIndex;
       }
       if(largestKaIndex==index)
        return;
       else
        swap(arr[largestKaIndex],arr[index]); 
       
       }

  }

      void heapifyRecursive(int *arr,int size,int index){
           
           int leftIndex=2*index;
           int rightIndex=2*index+1;
           int largestKaIndex=index;

           if(leftIndex<=size&&arr[largestKaIndex]<arr[leftIndex])
             largestKaIndex=leftIndex;
           if(rightIndex<=size&&arr[largestKaIndex]<arr[rightIndex])
             largestKaIndex=rightIndex;

           if(largestKaIndex==index)
             return;
           else{
            swap(arr[largestKaIndex],arr[index]);
            heapifyRecursive(arr,size,largestKaIndex);
           }       
       }
  
  void heapify(int* arr,int size,int index){//iteratively 
     
         
        while(index<=size){
        int rightIndex=2*index;
        int leftIndex=2*index+1;
        int largestKaIndex=index;
        if(rightIndex<=size&&arr[rightIndex]>arr[largestKaIndex]){
          largestKaIndex=rightIndex;
        }
        if(leftIndex<=size&&arr[leftIndex]>arr[largestKaIndex]){
          largestKaIndex=leftIndex;
        } 

        if(largestKaIndex==index)
         break;
         else{
          swap(arr[largestKaIndex],arr[index]);
          index=largestKaIndex;
         }
          
        }
  }
  void buildHeap(int arr[],int n){
      for(int i=n/2;i>0;i--)
        heapify(arr,n,i);
  }
  
  void heapSort(int *arr,int size){
    buildHeap(arr,size);
    while(size!=1){
      swap(arr[1],arr[size]);
      size--;
      heapify(arr,size,1);
    }
  }
     void printHeap(){
      for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
      }
     }


};
int main() {
   Heap h(20);
   h.insert(45);
   h.insert(89);
   h.insert(12);
   h.insert(34);
   h.insert(22);
   h.insert(56);
   h.deletion();
  //h. printHeap();
  int a[]={-1,7,1,6,3,6,4,6,11,14,10,51,12};
  //h.buildHeap(a,12);
  h.heapSort(a,12);
  //h.heapifyRecursive(a,5,2);
  for(int i=0;i<=12;i++)
  cout<<a[i]<<" ";
  return 0;
}
