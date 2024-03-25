# C
## POINTER
Em C, um byte de memória pode ser acessado usando pointer. Um pointer contendo o endereço de uma variável está apontando para aquela variável.
Exemplo:
int* num ou int *num

#### PRINTANDO POINTER
int x; // Create an int variable\
int* ptr = &x; // Pointer to that int (we'll dive into what "&" means in the coming exercises)\
printf("%p", ptr); // %p needed to instruct printf() that ptr is of type pointer

## ARMANEZAR ENDEREÇO
Para armazenarmos um endereço de uma variável, precisamos obviamente de seu endereço, isso é feito usando '&' antes do nome da variável.
Exemplo:
int x = 10;
int* pointer = &x;

## DEFERENCE OPERATOR
If we have a pointer that is assigned the memory address of a variable, eventually we will need to access the data that it contains so we can use or manipulate it. The data contained in the memory address pointed to by a pointer can be accessed using the dereference operator (*). The syntax is as follows:\
*pointerName;

#### PEGAR VARIAVEL DE UM POINTER E COMO MUDAR
Um pointer armazena o endereço, mas e se quisermos pegar o que ele armazena?
Faremos apenas o seguinte:\
\
int k = 200;\
int* ptr = &k;\
printf("%i", *ptr);\
\
Desse jeito, a gente transforma o endereço de volta para o dado.\
Para mudar o valor, só fazer isso:\
*ptr = 9;