#include <stdio.h>

typedef struct Date 
{
    unsigned int d, m, y;
} Date;

void sort(Date* arr, int length);
void printDates(Date* dates, int length);


int main() 
{
    Date dates[] = {
        { 10, 10, 2022 },
        { 15, 5, 2022 },
        { 20, 11, 1992 },
        { 11, 10, 2022 }
    };

    sort(dates, 4);
    printDates(dates, 4);    

    return 0;
}

int findMinIndex(Date* dates, int from, int to) 
{
    int minIndex = from;

    for (int i = from; i < to; i++)
    {
        if(dates[minIndex].y > dates[i].y)
        { 
            minIndex = i;
            continue;
        }

        if(dates[minIndex].y == dates[i].y && dates[minIndex].m > dates[i].m)
        {
            minIndex = i;
            continue;
        }

        if(dates[minIndex].y == dates[i].y && dates[minIndex].m == dates[i].m && dates[minIndex].d > dates[i].d)
            minIndex = i;

    }

    return minIndex;
    
}

void sort(Date* arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        int minIndex = findMinIndex(arr, i, length);
        Date aux = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = aux;
    }
}

void printDates(Date* dates, int length)
{
    for (int i = 0; i < length; i++)
        printf("%d/%d/%d ", dates[i].d, dates[i].m, dates[i].y);
    printf("\n");    
}

