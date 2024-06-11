#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    //Faz com que gere number aleatorio a cada execucao
    srand(time(0));
    int vidas = 4;
    int numberUser;
    //Sorteia o numero aleatorio
    int numberSorteado = rand() % 10 + 1;
    while(vidas > 0) {
        cout << "Informe um number: ";
        cin >> numberUser;
        if(numberUser == numberSorteado) {
            cout << "----------------------------------" << endl;
            cout << "Parabens, voce acertou o numero!!" << endl;
            cout << "O numero certo era " << numberSorteado << endl;
            cout << "----------------------------------" << endl;
            break;
        }else {
            vidas--;
            if(numberUser > numberSorteado) {
                cout << "---------------------" << endl;
                cout << "Dica: Um numero Menor" << endl;
                cout << "---------------------" << endl;
            } else {
                cout << "---------------------" << endl;
                cout << "Dica: Um numero Maior" << endl;
                cout << "---------------------" << endl;
            }
        }
    }

    if(vidas == 0) {
        cout << "----------------------------------" << endl;
        cout << "Infelizmente voce perdeu!!" << endl;
        cout << "O numero certo era " << numberSorteado << endl;
        cout << "----------------------------------" << endl;
    }
    return 0;
}
