#include <iostream>

using namespace std;

int main(){
    int cont = 0;
    //While - Estrutura de repeticao
    while (cont < 5) { //Condição para entrar no bloco
        cout << cont;
        cont++;
    }
    cout << "" << endl;

    cont = 0;
    //do while - Estrutura de repeticao
    //Executa pelo menos 1 vez a instução
    //no bloco da estrutura
    do {
        cout << cont;
        cont++;
    } while (cont < 5); //Condição para exercutar a instrução novamente ou não
    cout << "" << endl;

    //For - Estrutura de condição
    //Inicialização - Condição - Incremento
    for(int i = 0; i < 5; i++) {
        cout << i;
    }
    return 0;
}
