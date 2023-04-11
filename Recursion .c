// Online C compiler to run C program online
#include <stdio.h>
int sum = 1;
int call(int x){
    if(x){
        call(x-1);
    }
    else{
        return;
    }
    sum*=x;
}
int main() {
   int x =5;
   call(x);
   printf("%d",sum);
}

// Online C compiler to run C program online
#include <stdio.h>
int call(int x){
    if(x==0){
        return 0;
    }
    return x+call(x-1);
}
int main() {
   int x= 3;
   int e = call(x);
   printf("%d ",e);
}
