// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[4]={11,22,33,44};
    int k=1;
    int size = 4;
    for(int i=0;i<k;i++){
        int temp  = arr[size -1];
        for(int i=0;i<size;i++){
            arr[size-1-i]=arr[size-2-i]; 
        }
        arr[0]=temp;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
