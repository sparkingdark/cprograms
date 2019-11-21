#include<stdio.h>
#define max 10

//required elements..........

int low,high,a[max]={11,12,4,56,4,7,89}; ;

void swap(int *b,int *c);
int partition (int arr[], int low, int high) ;
void quicksort(int a[],int low,int high);
void printarray(int a[],int size);
  
// Driver program to test above functions 
int main() 
{ 
    int n = sizeof(a)/sizeof(a[0]); 
    quicksort(a, 0, n-1); 
    printf("Sorted array: n"); 
    printarray(a, n); 
    return 0; 
} 

//a utility function for swap
void swap(int *b,int *c)
{
   int temp=*b;
   *b=*c;
   *c=temp;
}


int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;

    for (int j=low;j< high;j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
        
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quicksort(int ap[],int low,int high)
{
    if (low<high)
    {
        int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
    
}
void printarray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d\t ", arr[i]); 
    printf("n"); 
} 