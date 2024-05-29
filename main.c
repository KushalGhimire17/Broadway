/*
    malloc, calloc, realloc, free
*/

#include <stdio.h>
int i;
int main()
{
    //1D Array
    int size;

    printf("\nEnter the size of your array: ");
    scanf("%d", &size);

    //int arr[size];
    int count_even=0, count_odd=0, e=0, o=0;

    int *arr, *even, *odd;
    arr = (int*)malloc(size*sizeof(int));

    //input
    for(i=0; i<size; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", arr+i);

        if(*(arr+i)%2 == 0)
            count_even++;
        else
            count_odd++;
    }

    //array
    even = (int*)malloc(count_even*sizeof(int));
    odd = (int*)malloc(count_odd*sizeof(int));

    //put elements in correct array
    for(i=0; i<size; i++)
    {
        if(*(arr+i)%2 == 0)
        {
            *(even+e) = *(arr+i);
            e++;
        }
        else
        {
            *(odd+o) = *(arr+i);
            o++;
        }
    }

    //display
    printf("\nElements in arr are: \n");
    display(arr, size);
    printf("\nElements in even are: \n");
    display(even, count_even);
    printf("\nElements in odd are: \n");
    display(odd, count_odd);

    return 0;
}

void display(int* arr, int size)
{
    for(i=0; i<size; i++)
    {
        printf("\n%d", *(arr+i));
    }
}
