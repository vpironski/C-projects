#include <stdio.h>

void swap(int *a, int *b){
    // int *p = &a;
    // int *p1 = &b;
    // int temp = a;
    // a = *p1;
    // p = &temp;
    // b = *p;

    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    int x = 5;
    int y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x,&y);

    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}