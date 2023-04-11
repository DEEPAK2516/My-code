#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int current = 0;
    int answer = arr[0];
    for(int i=0;i<size;i++){
        current+=arr[i];
        if(answer<current){
            answer = current;
        }
        if(current <=0){
            current   = 0;
        }
    }
    printf("%d ",answer);
}

