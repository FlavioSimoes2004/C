#include <stdio.h>

int main(){
    int test[][2] = {{1, 2}, {3, 4}, {5, 6}};
    printf("%i", sizeof(test)/sizeof(test[0]));
}