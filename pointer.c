#include <stdio.h>

int main(){
    int x = 10;
    int* ptr = &x;

    *ptr = 960;
    printf("x = %i, ptr = %i", x, *ptr);
}