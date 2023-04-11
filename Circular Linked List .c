#include <stdio.h>
#include<stdlib.h>
struct lnode{
    int data;
    struct lnode *next;
};
typedef struct lnode node;
node *end  = NULL;
void ib(int x){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = x;
    if(end == NULL){
        newnode->next = newnode;
        end = newnode;
    }
    else{
        newnode->next = end->next;
        end->next = newnode;
    }
}
void ie(int x){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = x;
    if(end == NULL){
        newnode->next = newnode;
        end = newnode;
    }
    else{
        newnode->next = end->next;
        end->next = newnode;
        end = newnode;
    }
}
void ip(int x,int pos){
    if(pos == 0){
        ib(x);
        return;
    }
    node *newnode =(node*)malloc(sizeof(node));
    newnode->data = x;
    node *temp = end->next;
    for(int i=0;i<pos-1;i++){
        temp = temp->next;
    }
    if(temp->next == end->next){
        ie(x);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void db(){
    if(end == NULL){
        printf("empty\n");
        return;
    }
    node *temp = end->next;
    if(end->next == end){
        end = NULL;
        return;
    }
    end->next = end->next->next;
    free(temp);
}    
void de(){
    if(end == NULL){
        printf("empty\n");
        return;
    }
    if(end->next == end){
        end = NULL;
        return;
    }
    node *temp = end->next;
    while(temp->next != end){
        temp =temp->next;
    }
    node *del = temp->next;
    temp->next = end->next;
    end = temp;
    free(del);
}
void dp(int pos){
    if(pos==0){
        db();
        return;
    }
    node *temp = end->next;
    for(int i=0;i<pos-1;i++){
        temp =temp->next;
    }
    if(temp->next == end){
        de();
        return;
    }
    node *del = temp->next;
    temp->next = temp->next->next;
    free(del);
} 
void d(){
    node *temp = end->next;
    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp!=end->next);
}
void count(){
    int count = 0;
    node *temp = end->next;
    do{
        count++;
        temp = temp->next;
    }while(temp != end->next);
    printf("count = :%d",count);
    
}
void reverse_recursion(){
    node *temp  =end->next;
    do{
        reverse_recursion(temp->next);
        printf("%d ",temp->data);
    }while(temp!=end->next);
    
    
        return;
    
}
int main()
{
    ib(12);
    ib(23);
    ib(34);
    ib(9);
    ib(78);
    d();
    reverse_recursion();
}


