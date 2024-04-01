# C
## INPUT
usar o scanf\
\
Exemplo:\
int main(){\
  int x;\
  scanf(" %i", &x);\
}\
\
Dar o espaço porque se for usado muito o scanf, ele pode ler um input indesejado.

## ARRAYs
#### CRIANDO
int seila[4]; <strong>ou</strong> int seila[] = {1, 2, 3, 4}; <strong>ou</strong> int age[4] = {7, 27, 34, 63};

#### TAMANHO
Iremos usar o 'sizeof(dataType)', que retorna um int.\
Se fizermos:\
\
int arr = {1, 2, 3};\
int length = sizeof(arr);\
\
Não irá printar o tamanho correto da array, pois ele retorna o tamanho do endereço daquele tipo vezes a quantidade de elementos armazenado na array.\
Para pegarmos o tamanho certinho, fazemos assim:\
\
int arr = {1, 2, 3};\
int length = sizeof(arr)/sizeof(int);\
\
Agora sim a variável length armazena o tamanho certo do array.

## MATRIZ
#### CRIANDO
int mat[][2] = {{1, 2}, {3, 4}, {5, 6}};

#### TAMANHO
Para descobrir o tamanho de uma matriz, fazemos quase a mesma coisa quando é pra descobrir o tamanho do array.\
\
int test[][2] = {{1, 2}, {3, 4}, {5, 6}};
printf("%i\n", sizeof(test)/sizeof(test[0]));
printf("%i", sizeof(test[0])/sizeof(int));

## STRING
Uma array de char.
#### CRIANDO
char str[] = "String"; <strong>ou</strong> char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

#### PRINTANDO STRING
printf("%s", string);

#### TAMANHO
strlen(String)\
Isso retorna o tamanho da string.

#### CONCATENATING STRINGs
strcat(dst, src)\
Pega a string 'src' e insere ela no final da string 'dst'.
- dst = destino
- src = source

#### COPYING STRINGs
strcpy(dst, src)\
Dado uma string não vazia 'str' e uma string vazia (uma array de caracteres vazios) 'dst', essa função copia o conteúdo de 'src' para o de 'dst'.\
É importante que o tamanho dessa string vazia(dst) tenha um tamanho igual ou maior que o tamanho de 'src' + 1, por causa o caractere nulo('\0').

## STRUCT
Como se fosse uma classe em java

#### CRIANDO
<pre>
struct Person{
  char name[20];
  int age;
};

int main(){
  struct Person pessoa1 = {"seila", 10};
  struct Person pessoa2 = {.age = 10, "seila"};
  struct Person pessoa3 = {"seila"};
  pessoa3.age = 10;
}
</pre>

#### OU
<pre>
typedef struct{
  char name[20];
  int age;
} Person;

int main(){
  Person pessoa = {"seila", 9};
}
</pre>

#### STRUCT POINTERS
Para acessar variáveis de um struct que é um pointer, podemos fazer o seguinte:\
(*pessoa).age; <em>ou</em> *pessoa->age

#### STRUCT E FUNCTIONS
Structs podem ser parâmetros para funções.

## POINTER
Em C, um byte de memória pode ser acessado usando pointer. Um pointer contendo o endereço de uma variável está apontando para aquela variável.\
Exemplo:\
<pre>
int* number;
int *number;
int * number;
</pre>

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

# C++
## PRINT
tem que incluir iostream\
Exemplo:\
#include <iostream>\
\
int main() {\
  std::cout << "Hello World!\n";\
}\
\
Exemplo 2:\
#include <iostream>\
\
using namespace std;\
\
int main() {\
  cout << "Hello World!\n";\
}

#### PRINTAR VARIÁVEIS
cout << "Var = " << var;

## INPUT
Exemplo:
<pre>
#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
}
</pre>

## VECTORS
tem que ter a biblioteca < vector>

#### CRIANDO VECTOR
std::vector< type> name;\
\
Exemplo:\
std::vector< int> calories_today;

#### INICIALIZANDO
std::vector< double> location = {42.651443, -73.749302};\
ou\
std::vector< double> location(2);

#### INDEX
vector[index];

#### ADICIONANDO E REMOVENDO ELEMENTOS
Para adicionar um elemento no final do vetor, podemos usar o .push_back(elemento).\
vector.push_back(10);\
\
Para remover um elemento que está no final do vetor, podemos usar o pop_back().\
vector.pop_back();

#### TAMANHO
Usar o .size().

#### USANDO COMO RETORNO DE FUNÇÃO
std::vector< int> function(){\
}

## BUILT-IN FUNCTIONS
Bibliotecas como < cmath>

## MULTI-FILE PROGRAMS
#### Declarar função
Podemos declarar funções e depois definí-la embaixo do main:\
Exemplo:\
#include <iostream>\
\
// Declaration at the top:\
void eat();\
\
int main() {\
\
  eat();\
\
}\
\
// Definition at the bottom:\
void eat() {\
\
  std::cout << "nom nom nom\n";\
\
}

#### HEADER FILES
Criar um arquivo .hpp que tem as declarações de funções.\
Exemplo:\
<pre>
<strong>.HPP</strong>
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

<strong>.CPP</strong>
double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int tenth_power(int num) {
  return pow(num, 10);
}

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
}
</pre>
Para podemos pegar o arquivo .HPP usaremos:\
#include "arquivo.hpp"

#### FUNCTIONS INLINE
Ficam no arquivo .hpp\
Exemplo:\
std::string goodnight1(std::string thing1);\
\
inline\
std::string goodnight1(std::string thing1) {\
  return "Goodnight, " + thing1 + ".\n";\
}

O inline vem em cima da definição da função

#### FUNCTION TEMPLATE
Função genérica\
Exemplo:
<pre>
template < typename T >
void print_cat_ears(T item) {

  std::cout << " " << item << "   " << item << " " << "\n";
  std::cout << item << item << item << " " << item << item << item << "\n";

} </pre>

## CLASSE
Exemplo:
<pre>
class Person{
  string name;
  int age;

  public:

  private:
    string cpf;
};
</pre>

#### FUNÇÃO NAS CLASSES
Exemplo 1:
<pre>
class Obj{
  public:
    void setId(int id){
      this->id = id;
    }

    void getId(){
      return id;
    }

  private:
    int id;
};
</pre>

Exemplo 2:
<pre>
class Obj{
  public:
    void setId(int id);
    void getId();

  private:
    int id;
};

Obj::setId(int id){
  this->id = id;
}

Obj::getId(){
  return id;
}
</pre>

#### CONTROLE DE ACESSO (PUBLIC E PRIVATE)
Exemplo:
<pre>
class Pessoa{
    int age;

    public:
        string name;

    private:
      string cpf;
};
</pre>
Variável 'age' é privada.\
Variável 'name' é pública.\
Variável 'cpf' é privada.

#### CONSTRUCTORS
Função pública que tem o mesmo nome da classe.\
Exemplo:
<pre>
class Pessoa{
    int age;

    public:
        string name;
        <strong>Pessoa</strong>(string name, int age){
            this->name = name;
            this->age = age;
        }
};

int main(){
    Pessoa p("flavio", 19);
    cout << p.name;
}
</pre>

#### DESTRUCTORS
Destrói objetos, sua declaração é quase igual ao do constructor.\
Exemplo:
<pre>
class Pessoa{
    int age;

    public:
        string name;
        Pessoa(string name, int age){
            this->name = name;
            this->age = age;
        }
        ~Pessoa(){ //this is a DESTRUCTOR, its the same with constructor, but it starts with '~'
            cout << "TCHAU\n";
        }
};

int main(){
    Pessoa p("flavio", 19);
    p.~Pessoa();
}
</pre>

## REFERENCES
<pre>
int seila(int &i){
  return i*3;
}

int main(){
  int x = 0;
  int &z = x;
  z++;
  cout << x << "\n";

  cout << seila(z);
}
</pre>

### PASS_BY_REFERENCE WITH CONST
Usado para dizer que aquela variável não será mudada dentro da função, ou seja, não poderemos dizer qe a variável é igual a x valor.\
Exemplo:
<pre>
int square(int <storng>const</strong> &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}
</pre>