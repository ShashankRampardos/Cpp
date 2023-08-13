
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insertionSort(char **a,int len){
    int subArrLen=1;
    for(int i=1;i<len;i++){
        for(int j=0;j<subArrLen;j++){
            if(strcmp(a[j],a[i])>0){
                char temp[20];
                strcpy(temp,a[j]);
                strcpy(a[j],a[i]);
                strcpy(a[i],temp);
            }

        }
         subArrLen++;
    }
}
void main(){
  char **a=(char**)malloc(4);
  for(int i=0;i<4;i++){
    char str[20];
    scanf("%s",&str);
    a[i]=(char*)malloc(strlen(str));
    strcpy(a[i],str);
  }
//  for(int i=0;i<4;i++){
//    printf("%s ",a[i]);
//  }
  insertionSort(a,4);
  for(int i=0;i<4;i++){
    printf("%s ",a[i]);
  }
}
