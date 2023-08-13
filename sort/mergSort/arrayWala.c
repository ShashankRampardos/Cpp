#include<stdio.h>
#include<stdlib.h>
void merge(int*,int,int,int);
void mergSort(int *a,int p,int r){
int    q=(p+r)/2;
   if(p<r){
    mergSort(a,p,q);
    mergSort(a,q+1,r);
    merge(a,p,q,r);
   }

}
void merge(int *a,int p,int q,int r){
int s1=p,s2=q+1,e1=q,e2=r;
if(s1==e1&&s2==e2){
    if(a[s1]>a[s2]){
        int t=a[s1];
        a[s1]=a[s2];
        a[s2]=t;
        }
     }else{
        int k=0;
      int *tmpArr=malloc(4*(e2+1));
      int i=s1,j=s2;
     while(i<=e1&&j<=e2){

      if(a[i]<a[j]){

        tmpArr[k]=a[i];
        i++;
        k++;
      }
      else{

        tmpArr[k]=a[j];
        j++;
        k++;
      }

     }

     if(i>e1)
       {
           while(j<=e2){
            tmpArr[k]=a[j];
            j++;
            k++;
           }
       }
     if(j>e2){
        while(i<=e1){
            tmpArr[k]=a[i];
            i++;
            k++;
           }
     }

     for(int ind=p,k=0;ind<=r;ind++,k++){
        a[ind]=tmpArr[k];
     }

free(tmpArr);
    }



}

void main(){
int *a=malloc(4*7);
for(int i=0;i<7;i++){
    scanf("%d",&a[i]);
}
mergSort(a,0,6);
for(int i=0;i<7;i++){
    printf("%d",a[i]);
}
}

//      while(i<=e1&&j<=e2){
//      if(a[i]<a[j]){
//            if(s2>e2&&s1==e1){
//                tmpArr[k]=a[i];
//            }else{
//        tmpArr[k]=a[i];
//        if(i<e1)
//            i++;
//        s1++;
//        k++;
//        }
//
//      }else{
//          if(s1>e1&&s2==e2){
//            tmpArr[k]=a[j];
//          }else{
//        tmpArr[k]=a[j];
//        if(j<e2)
//            j++;
//        s2++;
//        k++;
//          }
//      }
//
//      }
//      for(int i=p,k=0;i<=r;i++,k++){
//        printf(" %d ",tmpArr[k]);
//
//      }
