#include <stdio.h>
#include <stdlib.h>

int isRect(int arrayX[], int arrayY[])
{
    if(arrayX[0] == arrayX[3] && arrayX[1] == arrayX[2])
    {
        if(arrayY[0] == arrayY[1] && arrayY[2] == arrayY[3])
        {
            return 1;
        }
    }
    return 0;
    
}
int inRect(int arrayX[], int arrayY[])
{
    if(arrayX[4] >= arrayX[0] && arrayX[4] <= arrayX[1])
    {
        if(arrayY[4] >= arrayY[0] && arrayY[4] <= arrayY[2])
        {
            return 1;
        }
    }
    return 0;
}

int onDiagonal(int arrayX[], int arrayY[])
{
    if(arrayX[4] == arrayY[4])
    {
        return 1;
    }
    return 0;
}

int main(){
    int arrayX[5];
    int arrayY[5];

    int sizeX = sizeof(arrayX) / sizeof(arrayX[0]);
    int sizeY = sizeof(arrayY) / sizeof(arrayY[0]);
    // idx 0 - 3 -> Rect Points {A, B, C, D}
    // idx 4 -> point F

    printf("Input x coordinates:\n");
    for(int i = 0; i < sizeX; i++)
    {
        int valueX;
        scanf("%d",&valueX);
        arrayX[i] = valueX;
    }

    printf("Input y coordinates:\n");
    for(int i = 0; i < sizeY; i++)
    {
        int valueY;
        scanf("%d",&valueY);
        arrayY[i] = valueY;
    }
    printf("\n");

    int rect = isRect(arrayX, arrayY);
    if(rect == 1)
    {
        printf("True (is Rect)\n");
    }
    else
    {
        printf("False (is Rect)\n");
    }


    int point = inRect(arrayX, arrayY);
    if(point == 1)
    {
        printf("True (Point in Rect)\n");
    }
    else
    {
        printf("False (Point in Rect)\n");
    }

    int diagonal = onDiagonal(arrayX, arrayY);
    if(diagonal == 1)
    {
        printf("True (Point is on Diagonal)\n");
    }
    else
    {
        printf("False (Point is on Diagonal)\n");
    }

    printf("Array X{");
    for(int i = 0; i < sizeX; i++)
    {
        printf(" %d,", arrayX[i]);
    }
    printf("}");
    printf("\n");

    printf("Array Y{");
    for(int i = 0; i < sizeY; i++)
    {
        printf(" %d,", arrayY[i]);
    }
    printf("}\n");

    return 0;
}