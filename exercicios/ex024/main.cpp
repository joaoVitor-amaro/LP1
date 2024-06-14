#include <iostream>

using namespace std;

int main(){
    int primeiroTermo;
    int razao;
    cout << "Primeiro Termo: ";
    cin >> primeiroTermo;
    cout << "Razao: ";
    cin >> razao;
    //Cálculo da soma dos 10 primeiros elementos de uma PA
    int decimo = primeiroTermo + (10 - 1) * razao;
    //O controlador do loop inicia com o valor digitado do primeiro termo
    //A condição será verdadeira até o valor da soma da PA
    //Incrementa o valor digitado da razão da PA
    for(int i = primeiroTermo; i <= decimo; i += razao) {
        cout << i << " -> ";
    }
    cout << "Acabou";
    return 0;
}
