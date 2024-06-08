#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int pc = rand() % 5 + 1; //gera um number aleatorio
    int jogador;
    cout << "Informe um number: ";
    cin >> jogador;

    if(jogador == pc) {
        cout << "Jogador venceu" << endl;
    } else {
        cout << "Jogador Perdeu" << endl;
    }

    cout << "Computador sorteou no numero " << pc << endl;
    return 0;
}
