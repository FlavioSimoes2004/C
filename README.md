# C
## POINTER
Em C, um byte de memória pode ser acessado usando pointer. Um pointer contendo o endereço de uma variável está apontando para aquela variável.
Exemplo:
int* num ou int *num

#### PRINTANDO POINTER
int x; // Create an int variable\
int* ptr = &x; // Pointer to that int (we'll dive into what "&" means in the coming exercises)\
printf("%p", ptr); // %p needed to instruct printf() that ptr is of type pointer