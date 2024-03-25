# C
## STRING
Uma array de char.\
Exemplo:\
char str[] = "String";\

#### PRINT STRING
printf("%s", str);

#### PEGAR TAMANHO DE UMA STRING
strlen(str);

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

## POINTER ARITHMETIC
Assim como muitas variáveis, o pointer também tem operações aritméticas.\
A operação de adição de um pointer é apenas válido se for adicionando um inteiro para o pointer. Você não pode adiconar dois ou mais pointers juntos.\
- The important thing to note here is that adding n to a pointer does not increment the address to point to a value n bytes away. It moves the pointer by n * (size of the data type in bytes). For example, if a pointer to an int, the size of which is four bytes, initially contains address 100 (we will use a decimal address for simplicity), and three is added to the pointer, the pointer will now point to address 112.\
\
int main() {\
  int* ptr;\
  ptr += 3; // Increment pointer by three blocks.\
}

## POINTERS E ARRAYS
Temos as linhas de código a seguir:\
- int arr[10] = {2, 4, 7, 1, 10, 3, 11, 6, 20, 5};<br>
int* ptr = &arr[0]; // Pointer to the first element<br>

Vemos que o pointer está com o endereço do primeiro elemento da array. Podemos manipular esse endereço para ir para os outros elementos.
fazendo:
- ptr++;<br>

Agora o array está com o endereço do elemento no index 1 da array, fazendo novamente, ele estaria armazenando o endereço do elemento no index 2 da array.