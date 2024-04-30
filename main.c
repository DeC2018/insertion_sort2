/*
* C Program to sort an array in ascending order using
 * Insertion Sort using separate function
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *insertionsort(int[], int);
int main(void)
{
    int n;
    puts("Enter the value of n : ");
    scanf("%d", &n);
    int *A = malloc((size_t)n * sizeof(int));
    puts("******************************");
    puts("\nEnter the elements of the array :");
    puts("\n******************************");
    puts("\nUnsorted array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int *result = insertionsort(A, n);
    printf("\n%d", result[0]);
    puts("\n******************************");
    puts("\nRequired sorted array : ");
    for (int j = 0; j < n; j++)
    {
        printf(" %d", result[j]);
    }
}

int *insertionsort(int a[], int m)
{
    for (int i = 1; i < m; i++)
    {
        int temp, j;
        temp = a[i];
        j = i - 1;
        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    return a;
}
