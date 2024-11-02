#include<stdio.h>

int linearsearch(int arr[],int size, int element){
    for (int i=0;i<size;i++){
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,4,6,7,8,55,66};
    int size=sizeof(arr)/sizeof(int);
    int element=66;
    int searchindex=linearsearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchindex);

    return 0;
}