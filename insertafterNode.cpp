#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedtraverse(struct Node* ptr) {
    while (ptr != NULL) {
        printf("element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertafterNode(struct Node* prevNode, struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

struct Node* insertatindex(struct Node* head, int data, int index) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while (i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;
    
    second->data = 19;
    second->next = third;
    
    third->data = 48;
    third->next = fourth;
    
    fourth->data = 90;
    fourth->next = fifth;
    
    fifth->data = 366;
    fifth->next = NULL;

    // head = insertatindex(head, 1000, 2);
    // linkedtraverse(head);
    printf("after changed the %d: \n");
    head=insertafterNode(head,third,300);
    linkedtraverse(head);
    return 0;
}
