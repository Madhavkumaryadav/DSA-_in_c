#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
    
};

void linkedtraversed(struct Node*ptr){
    while(ptr!=NULL){
        printf("element :  %d \n",ptr->data);
        ptr=ptr->next;

    }
}
struct Node* insertatfirst(struct Node * head , int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};



int main(){
  struct Node*head;
  struct Node*second;
  struct Node*third;
  struct Node*fourth;
  struct Node*fifth;
  struct Node*sixth;


  head = (struct Node* ) malloc(sizeof(struct Node));
  second = (struct Node* ) malloc(sizeof(struct Node));
  third= (struct Node* ) malloc(sizeof(struct Node));
  fourth= (struct Node* ) malloc(sizeof(struct Node));
  fifth = (struct Node* ) malloc(sizeof(struct Node));
    

  head ->data=12;
  head->next=second;

  second->data=19;
  second->next=third;

  third->data=48;
  third->next=fourth;

  fourth->data=90;
  fourth->next=fifth;

  fifth->data=366;
  fifth->next=NULL;

  linkedtraversed(head);
  head=insertatfirst(head,400);
  linkedtraversed(head);
  return 0;


}