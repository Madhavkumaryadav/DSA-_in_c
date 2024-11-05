#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void traversecll(struct Node*head){
    struct Node*ptr=head;
    do{
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);   
}

struct Node*insertcll(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    do{
        printf("element : %d\n",ptr->data );
        ptr=ptr->next;
    }
    
}

int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*one=(struct Node*)malloc(sizeof(struct Node));

    head->data=900;
    head->next=one;
    one->data=2000;
    one->next=head;

    traversecll(head);
    return 0;
}