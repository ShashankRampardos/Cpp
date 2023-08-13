#include<stdio.h>
#include<stdlib.h>

void insertionSort(int *a,int len){
    int subArrLen=1;
    for(int i=1;i<len;i++){
        for(int j=0;j<subArrLen;j++){
            if(a[j]>a[i]){
                int temp;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }

        }
         subArrLen++;
    }
}
void main(){
  int *a=(int*)malloc(4*4);
  for(int i=0;i<4;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<4;i++){
    printf("%d ",a[i]);
  }
  insertionSort(a,4);
  for(int i=0;i<4;i++){
    printf("%d ",a[i]);
  }
}
