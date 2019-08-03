#include<stdio.h>
//#define max 10

#define true 1;
#define false 0;
int a[10],rear=-1,front=-1,max;

void enq(int item)
{
    if(rear==max-1&&front==0)
    {
        printf("full queue");
    }
      if(front==-1)
      {
          front=0;
          rear=0;
      }
      if(rear=max-1)
         {
             rear=0;
         }
          rear++;
          a[rear]=item;

}
void deq(){
    if(front==-1)
    {
        printf("quueue is emp10ty");
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }

    if(front==max-1)
    {
        front=0;
    }

    front++;
}

void display()
{   int i;
    if(front==-1)
    {
        printf("enpty");
    }

    if(front<=rear)
    {

    for(i=front;i<=rear;i++)
        {printf("%d",a[i]);
        }


    for(i=front;i<=max;i++)
         {
      printf("%d",a[i]);
         }

}

void re_display()
{
    int i;
    for(i=rear;i<front;i--)
    {
        printf("%d",a[i]);
    }
}

int search(int item)
{
    int i;
    for(i=0;i<=max;i++)
    {
        if(a[i]==item)
            return true;
    }
}

int main()
 {
     int i;
    scanf("%d",&max);
    enq(4);
    enq(5);
    enq(6);
    enq(6);
    enq(6);
    enq(9);

    deq();
    deq();
    deq();


    //display();
   // re_display();
return 0;}


