#include <stdio.h>
#include<stdlib.h>

typedef struct q_9
{
    int data;
    struct q_9 *link;
}*node;

node head=NULL;

node newnode(int x);
void node_add(int x);
node delete_front();
void count();
void display();

int main() {

    int choice,element;
    

    while (1)
    {
        printf("\n\t 1-->for add data:");
        printf("\n\t 2-->for delete data:");
        printf("\n\t 3-->for count node:");
        printf("\n\t 4-->for display data:");
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
                case 4:display();
                        break;      
                default:
                        break;
            }



        if (choice==5)
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
    return temp;
}

void node_add(int x)
{
    node p=head;
    node new=newnode(x);

    if (p==NULL)
    {
        p=new;
    }

    if(p!=NULL)
    {
        node wor=new;
        while (p->link!=NULL)
        {
            p=p->link;
        }

        printf("node added succesfully\n");
        p->link=wor;
        p=head;
        
    }
    
}

node delete_front()
{
    node p=head;
    head=p->link;
    free(p);
    return head;
}

void count()
{
    int i=0;

    node p=head;

    while (p!=NULL)
    {
        i++;
        p=p->link;
    }

    printf("\n\t the total  number of node is:%d",i);
    
}

void display()
{
    node p=head;
    if(p==NULL)
    {
        printf("empty list;}");
    }
    
    
         while(p!=NULL)
        {
            printf("\n the data is-->%d",p->data);
            p=p->link;
        }
    
   
}

node display1(node p)
{
    p=head;

    if(p==NULL)
    {
        printf("%d",p->data);
        return p;
    }
    display1(p->link);
    return NULL;
}
