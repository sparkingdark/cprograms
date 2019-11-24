#include <stdio.h>
#define max 5

int a[max]={510,6,11,9,4},i,j,min_idx;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        min_idx=i;

        for (j = i+1; j < n; j++)
        {
            /* code */
            if(a[j]<a[min_idx])
              {
                  min_idx=j;
              }
        }

        swap(&a[min_idx],&a[i]);
        
    }
    
}

void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("\nthe sorted elements are:---> %d\n",a[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    
    selection_sort(a,max);
    print(a,max);

    return 0;
}
