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

struct Node*delethead(struct Node*head){
    struct Node*p=head;
    head=head->next;
    free(p);
    return head;
}

struct Node*deletindex(struct Node*head, int index){
    struct Node*p=head;
    struct Node*q=head->next;
    for (int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node*deletlast(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}

struct Node*deletvalue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL ){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }else{
        printf("%d  this element is not present for this linked list \n");
    }
        
    
    return head;
}


int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*one=(struct Node*)malloc(sizeof(struct Node));
    struct Node*two=(struct Node*)malloc(sizeof(struct Node));
    struct Node*three=(struct Node*)malloc(sizeof(struct Node));

    head->data=100;
    head->next=one;
    one->data=200;
    one->next=two;
    two->data=300;
    two->next=three;
    three->data=400;
    three->next=NULL;

    showdata(head);
    printf("before deleting from head in the linked list \n");
    // head=deletindex(head,2);
    // showdata(head);
    // printf("before deleting from head in the linked list \n");
    // head=deletlast(head);
    // showdata(head);
    head=deletvalue(head,300);
    head=deletvalue(head,400);
    showdata(head);

    return 0;
 

}