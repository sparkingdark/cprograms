#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[], int length)
{
    /*
    Sorts into non-decreasing order
    To change the sorting to non-increasing order just change
    the comparison in while loop
    */
    register int j, k;
    int temp;

    for(j = 1; j < length; j++)
    {
        temp = arr[j];
        k = j - 1;
        while (k >= 0 && arr[k] > temp)
        {
            arr[k + 1] = arr[k];
            k--;
        }
        arr[k + 1] = temp;
    }
}

int main()
{
    int length;
    register int i;
    int *arr;

    //Finds the length of array and dynamically creates array of that length
    scanf("%d", &length);
    if ( (arr =  (int *)malloc(sizeof(int) * length)) == NULL)
    {
        printf("Not enough memory");
        return 1;
    }

    //Reads the array
    for(i = 0; i < length; i++)
        scanf("%d", &arr[i]);

    //Calls the sorting algorithm
    insertion_sort(arr, length);

    //Prints the sorted array
    for(i = 0; i < length; i++)
        printf("%d ", arr[i]);

    //Frees the memory allocated and returns
    free(arr);
    return 0;
}