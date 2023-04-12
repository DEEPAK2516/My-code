#include <stdio.h>
void setbit(int n,int bit){
    n=n|(1<<(bit-1));
    printf("%d",n);
}
void clearbit(int n,int bit){
    n=n&(~(1<<(bit-1)));
    printf("%d",n);
}
void getbit(int n,int bit){
    n=n&(1<<(bit-1));
    printf("%d",n);
}
void togglebit(int n,int bit){
    n=n^(1<<(bit-1));
    printf("%d",n);
}
void swap(int *x,int *y){
    *x =*x^*y;
    *y = *x^*y;
    *x = *x^*y;
}
int main()
{
    int a=12;
    int b =45;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}

