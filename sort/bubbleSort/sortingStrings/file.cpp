
#include <iostream>
#include<string.h>
using namespace std;
void bubbleSort(char **a,int len){



 for(int i=0;i<len;i++){
 	int flag=false;
 	for(int j=0;j<len-1;j++){
 		if(strcmp(a[j],a[j+1])>0){
 			char t[20];
 			strcpy(t,a[j]);
 			strcpy(a[j],a[j+1]);
 			strcpy(a[j+1],t);
 			flag=true;
 		}
 	}
 	if(!flag)break;
 }

}

int main() {
char **arr=new char*[4];
for(int i=0;i<4;i++){
	char str[20];
	cin>>str;
	arr[i]=new char[strlen(str)+1];
	strcpy(arr[i],str);
}

bubbleSort(arr,4);
for(int i=0;i<4;i++){
	cout<<arr[i]<<" ";
	delete arr[i];
}

delete arr;

}
