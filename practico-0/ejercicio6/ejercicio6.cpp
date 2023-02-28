#include <stdio.h>

void sort(int* arr, int length);

int main()
{
    int arr[6] = { 1, 5, -3, 32, 45, 3 };
    sort(arr, 6);

    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}
int findMinIndex(int* arr, int from, int to)
{
    int minIndex = from;
    for (int i = from; i < to; i++)
        if(arr[i] < arr[minIndex])
            minIndex = i;

    return minIndex;
}

void sort(int* arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        int minIndex = findMinIndex(arr, i, length);
        int aux = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = aux;
    }
}

