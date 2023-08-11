#include <iostream>
using namespace std;
void bubbleSort(int *a,int len){



 for(int i=0;i<len;i++){
 	int flag=false;
 	for(int j=0;j<len-1;j++){
 		if(a[j]>a[j+1]){
 			a[j]=a[j]+a[j+1];
 			a[j+1]=a[j]-a[j+1];
 			a[j]=a[j]-a[j+1];
 			flag=true;
 		}
 	}
 	if(!flag)break;
 }

}

int main() {
int *arr=new int[4];
for(int i=0;i<4;i++){
	cin>>arr[i];
}

bubbleSort(arr,4);
for(int i=0;i<4;i++){
	cout<<arr[i]<<" ";
}

delete arr;

}
