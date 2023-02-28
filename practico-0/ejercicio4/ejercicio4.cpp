#include <stdio.h>

#define FLAG '.'

char* readStr();


int main()
{
    char* phrase;
    int length;
    phrase = readStr();

    return 0;
}

char* readStr() 
{
    int length = 0;
    
    while(getc(stdin) != FLAG)
        length++;
    
    rewind(stdin);
    char* str = new char[length];

    printf("%c", getc(stdin));
    printf("%c", getc(stdin));

    return str;
}

