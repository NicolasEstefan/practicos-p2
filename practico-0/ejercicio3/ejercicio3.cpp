#include <stdio.h>

int occurrances(char sentence[100], int length, char c);

int main() 
{
    char sentence[100];

    printf("Ingrese frase: ");

    char c;
    int i = 0;
    while((c = getc(stdin)) != '.' && i < 100)
    {
        sentence[i] = c;
        i++;
    }
    printf("Ingrese caracter: ");
    scanf("\n%c", &c);
    printf("\"%c\" aparece %d veces.\n", c, occurrances(sentence, i, c));

    return 0;
}

int occurrances(char sentence[100], int length, char c)
{
    int count = 0;

    for (int i = 0; i < length; i++)
        if(sentence[i] == c)
            count++;

    return count;
}