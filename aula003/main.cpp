#include <iostream>

using namespace std;

int main(){
    int cont = 0;
    //While - Estrutura de repeticao
    while (cont < 5) { //Condi��o para entrar no bloco
        cout << cont;
        cont++;
    }
    cout << "" << endl;

    cont = 0;
    //do while - Estrutura de repeticao
    //Executa pelo menos 1 vez a instu��o
    //no bloco da estrutura
    do {
        cout << cont;
        cont++;
    } while (cont < 5); //Condi��o para exercutar a instru��o novamente ou n�o
    cout << "" << endl;

    //For - Estrutura de condi��o
    //Inicializa��o - Condi��o - Incremento
    for(int i = 0; i < 5; i++) {
        cout << i;
    }
    return 0;
}
