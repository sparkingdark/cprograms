#include<stdio.h>
#define true 1
struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *p;
struct node *temp;


void insertion(int item)
{

 struct node *temp=(struct node*)malloc(sizeof(struct node));

    temp->data=item;
    temp->next=NULL;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        p=start;
        while(p->next!=NULL)
        {
            p=p->next;
        }
            p->next=temp;

    }
}


void display()
{
    p=start;

    while(p!=NULL)
    {
        printf("%d \t",p->data);
        p=p->next;
    }

}

void count_node()
{
    p=start;
    int i=0;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }

   printf("no of node:%d,\n",i);
}

void linear_search_list(int ele)
{
    p=start;
    int i=ele;

    while(p!=NULL)
    {
        if(p->data==i)
            {printf("%d",p);
             break;
            }
        else
        {
            p=p->next;
        }
    }

}

void reverse()
{
    struct node *p1,*p2,*p3;

    p1=start;
    p2=p1->next;
    p3=p2->next;

    p1->next=NULL;
    p2->next=p1;

    while(p3!=NULL)
    {
        p1=p2;
        p2=p3;
        p3=p3->next;
        p2->next=p1;
    }

    start=p2;
}

void at_last_node(int item)
{
   // struct node *temp=(struct node*)malloc(sizeof(struct node));

    p=start;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;

    temp->next=NULL;
    temp->data=item;


}

void at_any_index(int pos)

 {

  //  struct node *temp=(struct node*)malloc(sizeof(struct node));

    int i=1;

    p=start;

    while(i<pos-1)
    {
        p=p->next;
        i++;
    }

    temp->next=p->next;
    p->next=temp;
}

void at_any_value(int item)
{
    p=start;
   // struct node *temp=(struct node*)malloc(sizeof(struct node));


    while(p!=NULL)
    {
        if(p->data==item)
        {
            temp->next=p->next;
            p->next=temp;
            temp->data=item;
        }
        else
          printf("not possible");

    }
}

void del_begin()
{
//struct node *temp=(struct node*)malloc(sizeof(struct node));

        temp=start;
        start=temp->next;

        free(temp);

}

void del_last()
{


    //struct node *temp=(struct node*)malloc(sizeof(struct node));
    int i=1;
    p=start;

    while(p->next->next!=NULL)
    {
        p=p->next;
    }

    temp=p->next;
    p->next=NULL;

    free(temp);
}

void del_any(int pos)
{
   //struct node *temp=(struct node*)malloc(sizeof(struct node));

    int i=1;
    p=start;

    while(i<pos-1)
    {
        p=p->next;
        i++;
    }

    temp=p->next;
    p->next=temp->next;

    free(temp);
}

int main()
{
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        int s,item;
        temp=(struct node*)malloc(sizeof(struct node));

        while(true)
        {
            printf("1 for insert\n 2 for display \n 3 for count_node \n 4 for linear search on list \n 5 for reverse the list \n 6 for add item in last position \n 7 for add item at any index \n 8 for add item based on value \n 9 for delete element from begin \n 10 for delete element from last \n 11 delete a element from any position \n 12 for break the loop\n ");
            printf("enter a choice:");
            scanf("%d",&s);

            switch(s)
            {
                case 1:printf("add a element:");
                       scanf("%d",&item);
                       insertion(item);
                       break;
                case 2:display();
                       break;
                case 3:count_node();
                       break;
                case 4:scanf("%d",&item);
                       linear_search_list(item);
                       break;
                case 5:reverse();
                       break;
                case 6:scanf("%d",&item);
                       at_last_node(item);
                       break;
                case 7:printf("enter a position to enter:\n");
                       scanf("%d",&item);
                       at_any_index(item);
                       break;
                case 8: printf("enter a position to enter:\n");
                       scanf("%d",&item);
                       at_any_value(item);
                       break;
                case 9:del_begin();
                       break;
                case 10:del_last();
                        break;
                case 11:printf("enter a position to delete:\n");
                        scanf("%d",&item);
                        del_any(item);
                        break;
                default:printf("end");
                        break;


            }

            if(s==12)
            {
                break;
            }
        }


}
