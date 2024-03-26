#include <stdio.h>

int main(){
    char str[] = "Hello World";
    char str2[] = {'o', 'l', 'a', '\0'};
    printf("%s\n", str);

    int len = strlen(str);
    printf("Tam da str1 = %i, tam da str2 = %i\n", len, strlen(str2));

    strcpy(str2, str);
    printf("%s\n", str2);
}