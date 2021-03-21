#include <stdio.h>
void printArray(int *A, int n);
void bubbleSort(int *A, int n);
int main()
{
    // int A[] = {7, 11, 9, 2, 17, 4}, n = 6;
    int A[] = {1, 2, 3, 4, 5, 6}, n = 6;
    printArray(A, n); //original array
    bubbleSort(A, n);
    printArray(A, n); //after bubble sort
    return 0;
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
/*
void bubbleSort(int *A,int n){
    for (int i = 0; i <n-1; i++)//for number of passes
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                // swapping the values
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            
        }
        
    }
    
}
*/
// making it adopted
// if our array is sorted then our result gets in one pass
//
// making it adoptive

/*
void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) //for number of passes
    {
        printf("working on pass no %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                // swapping the values
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
/*




