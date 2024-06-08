#include <iostream>
#include <cstdlib> //Biblioteca para usar a funcao rand
#include <ctime>
#include <windows.h> //Biblioteca para usar a funcao sleep

using namespace std;

int main(){
    //Mostrar ao user a sua jogada e a do PC
    char jogadas[][20] = {"Pedra", "Tesoura", "Papel"};
    //Gera um number aleatório a cada execução
    srand(time(0));
    int jogador;
    int pc = rand() % 3 + 1; //gera um number aleatorio

    cout << "JO-KE-PO" << endl;
    cout << "[1] - Pedra" << endl;
    cout << "[2] - Tesoura" << endl;
    cout << "[3] - Papel" << endl;
    cout << "Sua opacao: ";
    cin >> jogador;

    cout << "JO" << endl;
    Sleep(1000);
    cout << "KE" << endl;
    Sleep(1000);
    cout << "PO" << endl;

    cout << "----------------------" << endl;
    cout << "Computador jogou " << jogadas[pc-1] << endl;
    cout << "Jogador jogou " << jogadas[jogador-1] << endl;
    cout << "----------------------" << endl;

    //Verifica as jogadas do pc e do jogador
    if(pc == 1) {
      if(jogador == 1) {
        cout << "Empate" << endl;
      }
      if(jogador == 2) {
        cout << "Computador Vence" << endl;
      }
      if(jogador == 3) {
        cout << "Jogador Vence" << endl;
      }
    }

    if(pc == 2) {
        if(jogador == 1) {
            cout << "Jogador Vence" << endl;
        }
        if(jogador == 2) {
            cout << "Empate" << endl;
        }
        if(jogador == 3) {
            cout << "Computador Vence" << endl;
        }
    }

    if(pc == 3) {
        if(jogador == 1) {
            cout << "Computador Vence" << endl;
        }
        if(jogador == 2) {
            cout << "Jogador Vence" << endl;
        }
        if(jogador == 3) {
            cout << "Empate" << endl;
        }
    }

    return 0;
}
