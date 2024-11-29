#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*next;

};

void show(struct Node*ptr){
    while(ptr!=NULL){
        cout<<"Element is : "<< ptr->data<<endl;
        ptr=ptr->next;
    }
}

struct Node* inserthead(struct Node * head , int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*one=(struct Node*)malloc(sizeof(struct Node));
    struct Node*two=(struct Node*)malloc(sizeof(struct Node));

    head->data=89;
    head->next=one;
    one->data=38;
    one->next=two;
    two->data=37;
    two->next=NULL;


    show(head);
    cout<<"befor insertation for the head "<<endl;
    inserthead(head,3948);
    show(head);
    
    return 0;
}