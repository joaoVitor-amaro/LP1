#include <iostream>

using namespace std;

//Funcao void que nao retorna nada
//o retorno e vazio
void func1() {
    cout << "Funcao nao retorna nada" << endl;
}

//Funcao que retorna um valor inteiro
//paramentros sao valores copiados passado pela 
//variavel na funcao 
int soma(int a, int b) {
    //retorna um valor int
    return a + b;
}

int main() {
    func1();
    int a = 15;
    int b = 20;
    //os valores da variavel sera copiado
    //na funcao
    cout << soma(a, b) << endl;
    return 0;
}