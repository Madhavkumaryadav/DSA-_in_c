#include <stdio.h>
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

struct Node* inserthead(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct Node* insertend(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*q=head;
    while(q->next !=NULL){
        q=q->next;
    }
    q->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* insertatindex(struct Node*head,int data, int index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*q=head;
    int i=0;
    while(i!=index-1){
        q=q->next;
        i++;
    }
    ptr->data=data;
    
    ptr->next=q->next;
    q->next=ptr;
    return head;
}

struct Node*insertafter(struct Node*head,struct Node*prev, int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;

    return head;
}

int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*one=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=90;
    head->next=one;
    one->data=899;
    one->next=NULL;
    
    // showdata(head);
    // head=inserthead(head,364);
    showdata(head);
    printf("before insert data in linked list end\n");
    head=insertend(head,111);
    showdata(head);
    printf("insert data in linked list for head \n");
    head=inserthead(head,1234);
    showdata(head);
    printf("before index to insert data for linked list\n");
    head=insertatindex(head,2000,2);
    showdata(head);
    head=insertafter(head,one,3999);
    showdata(head);
    return 0;
}


