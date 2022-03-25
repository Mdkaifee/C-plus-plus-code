#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
void linkTra(struct Node*ptr)
{
    while (ptr!=0)
    {
       printf("element is:%d\n",ptr->data);
       ptr=ptr->next;
    }
    
}
int main(){
    struct Node*head;
     struct Node*second;
      struct Node*third;
      //Allocate memory in linked list in heap
    head=(struct Node*) malloc(sizeof(struct Node));
       second=(struct Node*)malloc(sizeof(struct Node));
          third=(struct Node*)malloc(sizeof(struct Node));
          //link first and second node
          printf("linked list is:\n");
    head->data=7;
    head->next=second;
    //link second and third node
    second->data=11;
 second->next=third;
//Terminate the list at the third list
    third->data=21;
    third->next=NULL;
    linkTra(head);
}