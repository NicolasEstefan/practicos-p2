#include <stdio.h>

float classAvg(float grades[5]);
void selectionSort(float grades[5]);

int main()
{
    float grades[5];
    printf("Ingrese 5 notas: ");
    
    for (int i = 0; i < 5; i++)
        scanf("%f", &grades[i]);

    selectionSort(grades);
    printf("Promedio de clase: %.2f\n", classAvg(grades));    
}

int findMaxIndex(float grades[5], int startIndex)
{
    int maxIndex = startIndex;
    startIndex++;

    for (; startIndex < 5; startIndex++)
    {
        if(grades[maxIndex] < grades[startIndex])
            maxIndex = startIndex;
    }


    return maxIndex;
}

void selectionSort(float grades[5]) 
{
    for (int i = 0; i < 5; i++)
    {
        int maxIndex = findMaxIndex(grades, i);
        float aux = grades[i];
        grades[i] = grades[maxIndex];
        grades[maxIndex] = aux;
    }
    
}

float classAvg(float grades[5]) 
{
    float avg = 0;
    for (int i = 0; i < 4; i++)
        avg += grades[i];

    return avg / 4;    
}

