#include <stdio.h>
#define max 10

int a[max],front=-1,rear=-1;

void enqueue(int data);
int dequeue();
void display();
void reverse(int rear);

int main()
{
     int choice,ele;
    while (1)
    {
        printf("\noption 1 for enqueue:");
        printf("\noption 2 for dequeue:");
        printf("\noption 3 for display:");
        printf("\noption 4 for reverse:");
        printf("\noption 6 for exit:");
     
        printf("\n please enter a choice:");
        scanf("%d",&choice);

        switch (choice)
          {
            case 1:printf("\n enter your element:");
                   scanf("%d",&ele);
                   enqueue(ele);
                   break;
            case 2:printf("%d",dequeue());
                   break;
            case 3:display();
                   break;
            case 4:reverse(rear);
                   display();
                   break;                    
            default:printf("\ninvalid option");
                   break;
           }

        if(choice==6)
           break;   
    }
     
}

void enqueue(int data)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=front;
        a[rear]=data;
    }

    if(front==0 || rear>=0)
    {
        rear++;
        a[rear]=data;
    }
    if(front>0 || rear==max-1)
    {
        rear=0;
        a[rear]=data;
    }

    if(rear==max-1)
    {
        printf("\n the queue is full");
    }


}

int dequeue()
{
  if(front==-1 || rear==-1)
  {
      printf("\n the queue is empty");
  }

  int temp=a[front];
  a[front]=0;

  front++;

  if(front==rear)
  {
      front=rear=-1;
  }
  else if(front==(max-1))
  {
     front=0;
  }

  return temp;
}

void display()
{
    if(front==-1&&rear==-1)
    {
        printf("\n queue is sempty");
    }

    if(front==0||rear>=front)
    {
        for (int i = 0; i < rear; i++)
        {
            printf("%d\t",a[i]);
        }
        
    }
    else
    {
        for(int i=front;i<max;i++)
        {
            printf("%d\t",a[i]);
        }
         for(int i=0;i<rear;i++)
        {
            printf("%d\t",a[i]);
        }


    }
    
}

void reverse(int rear)
{
   int c[max];

   if (rear==-1 && front==-1)
   {
       printf("queue is empty\n");
   }

   if(rear>front)
   {   int j=0;
       for (int i = rear; i >=0; i--)
       {
           
           int temp=a[i];
           c[i]=temp;
           j++;
       }
   }

   for(int i=0;i<max;i++)
   {
       a[i]=c[i];
   }
   
   
}
