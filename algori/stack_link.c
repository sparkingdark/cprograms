#include<stdio.h>
#include <stdlib.h>

typedef struct stack_link
{
    int data;
    int top;
    struct stack_link* link;
}*node;

node top=NULL;

node newnode(int data);
void push(int data);
int pop();
void display();

int main(int argc, char const *argv[])
{
    int choice,element;
    while (1)
    {
        printf("\n 1 for the push the element::");
        printf("\n 2 for pop a element");
        printf("\n 3 for the display");
        printf("\n 4 for exit the loop");

        printf("\n enter your choice:");
        scanf("%d",&choice);

        switch (choice)
            {
                case 1: printf("enter the the element:");
                        scanf("%d",&element);
                        push(element);
                        break;
                case 2: printf("\n the poped element is:%d",pop());
                        break;
                case 3: display();
                        break;               
                default:
                        break;
        }

        if(choice==4)
           {
               printf("\n exit from loop");
               break;
           }
    }
    return 0;
}

node newnode(int data)
{
    node temp=(node)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;

    return temp;
}

void push(int data)
{
    node k=newnode(data);

    k->link=top;
    top=k;

    if(k==NULL)
    {
        printf("heap overflow");
        exit(1);
    }


}

int pop()
{
    if (top==NULL)
    {
        printf("\n stack underflow");
    }

    node temp=top;

    top=top->link;

    temp->link= NULL;

    int poped=temp->data;

    free(temp);

    return poped;
}

void display()
{
    if(top==NULL)
    {
        printf("\n no element");
    }

    node p=top;

    while (p!=NULL)
    {
        printf("\n %d",p->data);
        p=p->link;
    }

    
}
