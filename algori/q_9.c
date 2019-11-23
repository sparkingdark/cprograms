#include <stdio.h>
#include<stdlib.h>

typedef struct q_9
{
    int data;
    struct q_9 *link; 
}*node;

node head=NULL;
node tail=NULL;

node newnode(int x);
void node_add(int x);
void delete_front();
void count();
void display();
void delete_last();

int main() {

    int choice,element;
    

    while (1)
    {
        printf("\n\t 1-->for add data:");
        printf("\n\t 2-->for delete data:");
        printf("\n\t 3-->for count node:");
        printf("\n\t 4-->for delete from last data:");
        printf("\n\t 5-->for display data:");
        printf("\n please enter a choice:");
        scanf("%d",&choice);
        switch (choice)
            {
                
                case 1: printf("enter the element:\t------->");
                        scanf("%d",&element);
                        node_add(element);
                        break;
                case 2:delete_front();
                        break;
                case 3: count();
                        break;    
                case 4: delete_last();
                        break;              
                case 5:display();
                        break;      
                default:
                        break;
            }



        if (choice==6)
            {
                printf("you are exited from loop:\n");
                break;
            }
    }
    
    
}

node newnode(int x)
{
    node temp=(node)malloc(sizeof(node));
    temp->data=x;
    temp->link=NULL;
    return temp;
}

void node_add(int x)
{
    node temp=newnode(x);

    if(head==NULL)
    {
        head=temp;
        tail=temp;
        temp=NULL;
        return;
    }
    else
    {
        tail->link=temp;
        tail=temp;
    }

}

void display()
{
    node p=head;
    while (p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->link;
    }
}

void count()
{
    node p=head;
    if (p==NULL)
    {
        printf("no element present here\n");
    }

    int i=0;
    while(p!=NULL)
    {
        i++;
        p=p->link;
    }

    printf("here is %d nodes are present\n",i);
}

void delete_front()
{
   node temp=head;
   head=head->link;
   free(temp);
   printf("\n memory freed");
   

}

void delete_last()
{
    node temp=tail;
    node p=head;
    

    while(p->link->link!=NULL)p=p->link;

    tail=p->link;

    free(temp);
    printf("memory freed\n");
}

