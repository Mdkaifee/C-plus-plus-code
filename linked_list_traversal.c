#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
int main(){
    struct Node*head;
     struct Node*second;
      struct Node*third;
      //Allocate memory in linked list in heap
    head=(struct Node*) malloc(sizeof(struct Node));
       second=(struct Node*)malloc(sizeof(struct Node));
          third=(struct Node*)malloc(sizeof(struct Node));
          //link first and second node
    head->data=7;
    head->next=second;
    //link second and third node
    second->data=11;
 second->next=third;
//Terminate the list at the third list
    third->data=21;
    third->next=NULL;
}