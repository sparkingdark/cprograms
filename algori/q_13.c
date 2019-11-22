#include <stdio.h>
#include<stdlib.h>

typedef struct q_13
{
    int data;
    struct q_13 *link;
}*node;

node head=NULL;
node tail=NULL;

node newnode(int x);
void add_node(int x);
void delete();
void display();
int count();

int main()
{
   add_node(2);
   add_node(3);
   add_node(4);
   add_node(5);
   add_node(5);
   add_node(6);

   display();

   delete();

   display();

}

node newnode(int x)
{
    node temp=(node)malloc(sizeof(node));
    temp->data=x;
    temp->link=temp;

    return temp;    
}

void add_node(int x)
{
    node p=newnode(x);
    if (head==NULL)
    {
       head=p;
       tail=p;
       p=tail;
       return;
    }

    tail->link=p;
    tail=p;
    p=head;

    printf("\nnode added succesfully\n");
    
}

void display()
{
    node p=head;

    if(p==NULL)
    {
        printf("empty list");
    }
    else
    {
        printf("\n%d",head);
         while (p!=tail)
            {
                printf("\t %d",p->data);
                p=p->link;
            }

           printf("\t %d",p->data);
           printf("\t%d",p->data);
           printf("\n%d",tail);

    }
    
   
    
}

void delete()
{
    node p=head;

    if(p==NULL)printf("\n this is a empty list");
    
    while (p->link->link!=head)
    {
        p=p->link;
    }

    node temp=p;
    p->link=head;
    tail=head;
    free(temp);
    printf("\n memory freed");
}