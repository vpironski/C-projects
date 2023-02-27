#include <stdio.h>

int main(){

    int a = 6;
    int b = 15;

    while(a != b){
        while(a > b){
            a = a - b;
        }
        while(b > a){
            b = b - a;
        }
    }

    if (a == 1){
        printf("There is no NOD");
    }
    else{
        printf("The NOD is %d", a);
    }
}