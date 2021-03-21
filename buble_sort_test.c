#include <stdio.h>
void printArray(int *array, int n);
void bubble_sort_non_adoptive(int *array, int n);
void bubble_sort_adoptive(int *array, int n);

int main()
{
    int array[] = {3, 7, 1, 44, 11, 7, 3}, n = 7;
    // int array[] = {2, 4, 6, 8, 10, 12, 14}, n = 7;
    printf("original array\n");
    printArray(array, n);
    printf("\noutput by nonAdoptive algo\n");
    bubble_sort_non_adoptive(array, n);
    printArray(array, n);
    printf("\n\noutput by Adoptive algo\n");
    bubble_sort_adoptive(array, n);
    printArray(array, n);

    return 0;
}
void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubble_sort_non_adoptive(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("working on %d pass\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// adoptive bubble sort
void bubble_sort_adoptive(int *array, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        printf("Processing on occurance %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}