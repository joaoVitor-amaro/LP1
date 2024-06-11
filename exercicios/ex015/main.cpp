#include <iostream>

using namespace std;

int main(){
    int inicio, fim, incremento;

    cout << "Digite o primeiro Valor: ";
    cin >> inicio;
    cout << "Digite o ultimo Valor: ";
    cin >> fim;
    cout << "Digite o incremento: ";
    cin >> incremento;

    //Verfica se o incremento � igual a 0
    if(incremento == 0) {
        cout << "O incremento n�o pode ser igual a 0";
        return 0; //Encerra a exercu��o do codigo
    }

    //La�o de repeti��o crescente
    if(inicio <= fim ) {
        while(inicio <= fim) {
            cout << inicio;
            if(incremento > 0) {
                //Incrementa 'inicio' normalmente se o incremento for positivo
                inicio += incremento;
            } else {
                //Caso contr�rio, ajusta o incremento para evitar loops infinitos
                inicio += incremento *(-1);
            }
        }
    }

    //La�o de repetic�o descrescente
    if(inicio >= fim) {
        while(inicio >= fim) {
            cout << inicio;
            if(incremento > 0) {
                //Incrementa 'inicio' normalmente se o incremento for positivo
                inicio -= incremento;
            } else {
                //Caso contr�rio, ajusta o incremento para evitar loops infinitos
                inicio -= incremento *(-1);
            }
        }
    }

    return 0;
}
