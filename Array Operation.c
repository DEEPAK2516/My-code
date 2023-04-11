// array insertion
#include<stdlib.h>
#include<stdio.h>
int main(){
int arr[4]={11,22,33,44};
int size = 4;
int pos = 4;
int value = 2516;
if(pos>size){
    printf("invalid\n");
    return 0;
}
int i;
++size;
for(i=size -1;i>=pos-1;i--){
  arr[i]=arr[i-1];
}
arr[pos-1]=value;
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}
//Array Deletion
#include<stdlib.h>
#include<stdio.h>
int main(){
int arr[4]={11,22,33,44};
int size = 4;
int pos = 5;
if(pos>size){
    printf("invalid\n");
    return 0;
}
int i;
--size;
for(i=pos-1;i<=size-1;i++){
  arr[i]=arr[i+1];
}
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}

//Merge Two Array
include<stdlib.h>
#include<stdio.h>
int main(){
int a1[3]= {11,22,33};
int a2[4]={44,55,66,77};
int s1= sizeof(a1)/sizeof(a1[0]);
int s2 = sizeof(a2)/sizeof(a2[0]);
for(int i=0;i<s2;i++){
    a1[s1+i]=a2[i];
}
for(int i=0;i<s1+s2;i++){
    printf("%d ",a1[i]);
}
}
