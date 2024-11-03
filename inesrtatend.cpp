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

struct Node * insertatend(struct Node * head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

int main(){
  struct Node*head= (struct Node* ) malloc(sizeof(struct Node));
  struct Node*second= (struct Node* ) malloc(sizeof(struct Node));
  struct Node*third= (struct Node* ) malloc(sizeof(struct Node));
  struct Node*fourth=(struct Node* ) malloc(sizeof(struct Node));
  struct Node*fifth=(struct Node* ) malloc(sizeof(struct Node));
 


//   head = (struct Node* ) malloc(sizeof(struct Node));
//   second = (struct Node* ) malloc(sizeof(struct Node));
//   third= (struct Node* ) malloc(sizeof(struct Node));
//   fourth= (struct Node* ) malloc(sizeof(struct Node));
//   fifth = (struct Node* ) malloc(sizeof(struct Node));
    

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

  printf("after insert element at end %d \n");
  linkedtraversed(head);
  printf("before insert element at end %d \n");
  head=insertatend(head,500);
  linkedtraversed(head);
  return 0;


}
