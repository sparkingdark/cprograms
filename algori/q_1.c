#include<stdio.h>
#define max 10

int a[max];
int top=-1;

void push(int ele);
int pop();
void peep();
void reverse();
void display(int top);

int main()
{
    int choice,ele;
    while (1)
    {
        printf("\noption 1 for push:");
        printf("\noption 2 for pop:");
        printf("\noption 3 for peep:");
        printf("\noption 4 for reverse:");
        printf("\noption 5 for display:");
        printf("\noption 6 for exit:");
     
        printf("\n please enter a choice:");
        scanf("%d",&choice);

        switch (choice)
          {
            case 1:printf("\n enter your element:");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:printf("%d",pop());
                   break;
            case 3:peep();
                   break;
            case 4:reverse();
                   break; 
            case 5:display(top);
                   break;                        
            default:printf("\ninvalid option");
                   break;
           }

        if(choice==6)
           break;   
    }
     
    
}

void push(int ele)
{
    if(top==max)
      {
          printf("\n stack overflow");
      }

    if(top==-1)
       {
           top=0;
           a[top]=ele;
           printf("element inserted perfectly");
       }  

    if(top>=0)
    {
        top=top+1;
        a[top]=ele;\
        printf("element inserted perfectly");
    }   
}

int pop()
{
    if(top==-1)
    {
        printf("\nstack underflow");
    }

    int temp=a[top];
    top--;
    return temp;
}

void peep()
{
    if(top==-1)
    {
        printf("\n stack is empty");
    }

    printf("%d\n",a[top]);
}

void reverse()
{
   if(top==-1)
    {
        printf("\nstack underflow");
    }
    
    int j=0;

    for (int i = top; i >=0; i--)
    {
        int temp=a[i];
        a[j]=temp;
        j++;     
    }

}

void display(int top)
{
    if (top==-1)
    {
        printf("stack is underflow\n");
    }

    for (int i = 0; i <= top; i++)
    {
        printf("%d\t",a[i]);
    }
    
}



