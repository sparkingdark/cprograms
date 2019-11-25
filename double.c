#include <stdio.h>
#include <stdlib.h>

typedef struct new_node
{
    int data;
    struct new_node* prev;
    struct new_node* next;
}*node;

node head=NULL;
node tail=NULL;

void insert(int data) {  
    //Create a new node  
    node newNode = (node)malloc(sizeof(node));  
    newNode->data = data;  
      
    //If list is empty  
    if(head == NULL) {  
        //Both head and tail will point to newNode  
        head = tail = newNode;  
        //head's previous will point to NULL  
        head->prev = NULL;  
        //tail's next will point to NULL, as it is the last node of the list  
        tail->next = NULL;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode's previous will point to tail  
        newNode->prev = tail;  
        //newNode will become new tail  
        tail = newNode;  
        //As it is last node, tail's next will point to NULL  
        tail->next = NULL;  
    }  
}  
   

void display() {  
    //Node current will point to head  
    node current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of doubly linked list: \n");  
    while(current != NULL) {  
        //Prints each node by incrementing pointer.  
        printf("%d ", current->data);  
        current = current->next;  
    }  
}  

int main(int argc, char const *argv[])
{
    insert(2);
    insert(32);
    insert(4);
    insert(5);

    display();
    return 0;
}
