#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
void showdata(struct Node*ptr){
    while(ptr!=NULL){
        printf("element : %d \n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node*reverse(struct Node*n4,struct Node*n1){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=n4->prev;
    ptr->next=n1;
    return n1;
}
struct Node*inserthead(struct Node*n1j){
    struct Node*p=(struct Node*)malloc(sizeof(struct Node))
}

int main(){
    struct Node*n1=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n2=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n3=(struct Node*)malloc(sizeof(struct Node));
    struct Node*n4=(struct Node*)malloc(sizeof(struct Node));

    n1->prev=NULL;
    n1->data=24;
    n1->next=n2;
    n2->prev=n1;
    n2->data=87;
    n2->next=n3;
    n3->prev=n2;
    n3->data=56;
    n3->next=n4;
    n4->prev=n3;
    n4->data=99;
    n4->next=NULL;
    
    showdata(n1);
    n1=reverse(n1,n4);
    showdata(n1);
    return 0;
}



