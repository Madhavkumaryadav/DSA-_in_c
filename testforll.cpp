#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void showdata(struct Node*ptr){
    while(ptr!=NULL){
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*one=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=899;
    head->next =one;
    one->data=399;
    one->next=NULL;
    
    showdata(head);
    return 0;
}