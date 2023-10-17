#include <stdio.h>
int maxSize(int array[], int size)
{
    int biggest = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] > biggest){
            biggest = array[i];
        }
    }
    return biggest;
}


int main()
{
    int n;
    printf("Input a size of array: ");
    scanf("%d",&n);
    int array[n];
    
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++)
    {
        int input;
        printf("Input a number: ");
        scanf("%d",&input);
        array[i] = input;
    }
    printf("%d \n",maxSize(array,size));
    return 0;
}
