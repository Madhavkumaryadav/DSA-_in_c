#include <stdio.h>
#define MAX 5 // Size of the queue

// Queue structure
struct Queue {
    int arr[MAX];
    int front;
    int rear;

};

void iniqueue(struct Queue*q){
    q->rear=-1;
    q->front=-1;

}
//check the queue is full 
int full(struct Queue*q){
    return (q->rear==MAX-1);

}
//check the queue is empty 

int empty(struct Queue*q){
    return (q->front==-1);
}

//you want to add the data from queue 

void enqueue(struct  Queue*q , int value){
    if (full(q)){
        printf("Queue is full this element %d is not added for queue  \n");

    }else{
        if(q->front==-1){
            q->front=0;
        }
        q->rear++;
        q->arr[q->rear]=value;
        printf("%d added to the queue \n", value);

    }
}

//dequeue operation (remove element)
//remove the element form front 
int dequeue (struct Queue*q){
    if (empty(q)){
        printf("Queue us empty \n");

    return -1;
    }else{
        int value=q->arr[q->front];
        if(q->front==q->rear){
            q->front=q->rear=-1;

        }else{
            q->front++;

        }return value;
    }
}

//dispaly the queue

void display(struct Queue*q){
    if(empty(q)){
        printf("queue is empty \n");

    }else{
        printf("Queue : ");
        for (int i=q->front;i<=q->rear;i++){
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main(){
    struct Queue q;
    iniqueue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);

    // display(&q);
    // printf("Dequeue : %d\n",dequeue(&q));
    // display(&q);
    enqueue(&q,40);
    enqueue(&q,50);
    enqueue(&q,60);
    // display(&q);
    // printf("Dequeue : %d\n",dequeue(&q));
    // printf("Dequeue : %d\n",dequeue(&q));
    // printf("Dequeue : %d\n",dequeue(&q));
    // printf("Dequeue : %d\n",dequeue(&q));
    display(&q);



    return 0;
}
