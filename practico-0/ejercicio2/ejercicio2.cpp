#include <stdio.h>
#include <math.h>

bool isPrime(int num);
void printPrimes(int from, int to);


int main()
{
    int from, to;
    printf("Print primes from, to: ");
    scanf("%d %d", &from, &to);

    printPrimes(from, to);

    return 0;
}

bool isPrime(int num)
{
    if(num == 1 || num == 0)
        return false;

    for (int i = 2; i <= (int)sqrt(num); i++)
        if(num % i == 0)
            return false;

    return true;    
}

void printPrimes(int from, int to)
{
    for (int i = from; i <= to; i++)
        if(isPrime(i))
            printf("%d ", i);        
    printf("\n");
}