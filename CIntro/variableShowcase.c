#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("Integer range:\t%d\t%d\n", INT_MIN, INT_MAX);
    printf("Long range:\t%d\t%d\n", LONG_MIN, LONG_MAX);
    printf("Float range:\t%d\t%d\n", FLT_MIN, FLT_MAX);
    printf("Double range:\t%d\t%d\n", DBL_MIN, DBL_MAX);
    printf("Long Double range:\t%d\t%d\n", LDBL_MIN, LDBL_MAX);
    printf("Float-Double epsilon:\t%d\t%d\n", FLT_EPSILON, DBL_EPSILON);
}