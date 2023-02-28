
typedef struct Vector2 
{
    int x, y;
} Vector2;

typedef struct Vector2Col
{
    int maxLength, length;
    Vector2* vectors;
} Vector2Col;

int main()
{

    return 0;
}

void addVector(Vector2Col vectorCol, Vector2 vector)
{
    if(vectorCol.length >= vectorCol.maxLength)
        return;
    
    vectorCol.vectors[vectorCol.length] = vector;
    vectorCol.length++;
}

