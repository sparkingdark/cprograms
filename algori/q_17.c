#include <stdio.h>
#include<stdlib.h>

typedef struct MyStruct
{
    struct MyStruct *prev;
    struct MyStruct *next;
    int data;
}*node;

node head=NULL;
node tail=NULL;

node newnode(int data);
void insert(int data);
void count();
void search(int element);
void display();
int main() {
    

  int choice,ele;

  while (1)
  {
      printf("\n 1 for insert element");
      printf("\n 2 for count node");
      printf("\n 3 for search an element");
      printf("\n 4 for exit from menu");

      printf("\n enter your choice:");
      scanf("%d",&choice);

      switch (choice)
      {
          case 1:printf("\n entert the element");
                scanf("%d",&ele);
                insert(ele);
                display();
                break;
         /*  case 2:count();
                 break;
           case 3:printf("\n enter the element to search:");
                scanf("%d",&ele);
                search(ele);
                break;*/      

        case 5:display();
                break;              
        default:
                break;
      }
        if (choice==4)
        {
            printf("\n exited from loop");
            break;
        }
        

  }
  

}

node newnode(int data)
{
    node temp=(node)malloc(sizeof(node));

    temp->data=data;

    temp->prev=NULL;
    temp->next=NULL;

    return temp;
}

void insert(int data)
{
    node p=newnode((data));
    if(head==NULL)
       {
           head=p;
           tail=p;
           p->prev=NULL;
           p->next=head;

       }

       p->prev=head;
       p->next=NULL;
       tail=p;
       tail->prev=p;

       printf("niode inserted successfully \n");



}

void display()
{
    
    node p=head;

    while (p->next!=NULL)
    {
        printf("\n %d",p->data);
        p=p->next;
    }
}