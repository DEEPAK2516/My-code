// Online C compiler to run C program online
#include <stdio.h>
void call(int *arr,int *n){
    int s = *n;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<s;k++){
                    arr[k]=arr[k+1];
                }
                s--;
            }
        }
    }
    *n = s;
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    call(a,&n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
