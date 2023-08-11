#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void selectionSort(int *a,int len){
  int min,loc;
for(int i=0;i<len;i++){
        min=a[i];
        loc=i;
    for(int j=i+1;j<len;j++){
        if(min>a[j]){
        min=a[j];
        loc=j;}
    }
  int temp;
  temp=a[i];
  a[i]=a[loc];
  a[loc]=temp;

}
}

int main(){
    int *a=(int*)malloc(4*4);

  a[0]=4;
  a[1]=6;
  a[2]=0;
  a[3]=11;
  selectionSort(a,4);

for(int i=0;i<4;i++)
  printf("%d ",a[i]);
}
