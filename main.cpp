#include <iostream>

using namespace std;

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